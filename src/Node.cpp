/* Copyright (c) 2018 Daichi Teruya                             */
/* Released under the MIT License                               */
/* https://github.com/maruuusa83/arisan_sim/blob/master/LICENSE */

#include "Task.h"
#include "Node.h"

#include <algorithm>
#include <random>
#include <vector>

namespace arisan {
namespace sim {

static const int NODE_TH_VARIATION = 1000;

std::random_device rnd;
std::mt19937 Node::mt(rnd());

unsigned int Node::T_BAR = 500;

Node::Node()
{
  std::uniform_int_distribution<> rand(0, NODE_TH_VARIATION);
  _threshold = rand(mt) + 1;
}

Node::Node(unsigned int _T_BAR){
  T_BAR = _T_BAR;
}

Task &Node::select_task(unsigned int t, std::vector<Task *> tasks)
{
  std::shuffle(tasks.begin(), tasks.end(), mt);

  for (auto task : tasks){
    if (!task->is_finished) continue;

    float p = calc_p(t - task->t_start);
  }

  return *tasks[0];
}

bool Node::process_task()
{

}

bool Node::is_processing()
{
  return (processing_task == nullptr ? false : true);
}

float Node::calc_p(int t)
{
  float temp = _threshold * (t + 1);
  temp = temp * temp;

  return ((float)temp / (temp + T_BAR * T_BAR));
}

}
}


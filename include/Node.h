/* Copyright (c) 2018 Daichi Teruya                             */
/* Released under the MIT License                               */
/* https://github.com/maruuusa83/arisan_sim/blob/master/LICENSE */

#ifndef INCLUDE_NODE_H_
#define INCLUDE_NODE_H_

#include "Task.h"

#include <vector>
#include <random>

namespace arisan {
namespace sim {

class Node
{
public:
  Node();
  Node(unsigned int _T_BAR);
  Task &select_task(unsigned int t, std::vector<Task *> tasks);

  bool process_task();

  bool is_processing();

private:
  float _threshold;
  static unsigned int T_BAR;
  Task *processing_task;

  virtual inline float calc_p(int t);

  static std::mt19937 mt;
};

}
}

#endif // INCLUDE_NODE_H_

/* Copyright (c) 2018 Daichi Teruya                             */
/* Released under the MIT License                               */
/* https://github.com/maruuusa83/arisan_sim/blob/master/LICENSE */

#include "Environment.h"
#include "Node.h"
#include "Task.h"

namespace arisan {
namespace sim {

Environment::Environment(const unsigned int num_nodes, const time sim_time)
  : NUM_NODES(num_nodes),
    SIM_TIME(sim_time)
{

}

void Environment::initialize(){  }
void Environment::add_tasks(const time t) {  }

void Environment::start_sim()
{
  // initialize nodes
  std::vector<Node *> nodes;
  for (unsigned int i = 0; i < NUM_NODES; i++){
    nodes.push_back(new Node());
  }

  initialize();

  // start experiment
  for (time t = 0; t < SIM_TIME; t++){
    add_tasks(t);

    #pragma omp parallel
    {
      #pragma omp single
      {
        for (auto node : nodes){
          #pragma omp task
          {
            if (!node->is_processing()){ // waiting
              node->process_task();
            }
            else { // processing

            }
          }
        }
      }
    }
  }
}

}
}

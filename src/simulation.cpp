/* Copyright (c) 2018 Daichi Teruya                             */
/* Released under the MIT License                               */
/* https://github.com/maruuusa83/arisan_sim/blob/master/LICENSE */

#include "Environment.h"

#include <vector>
#include <cstdio>

static const int NUM_NODES = 100;
static const int SIM_TIME = 1000;

class MyEnv : public arisan::sim::Environment
{
public:
  MyEnv(const unsigned int num_nodes, const arisan::sim::time sim_time) : arisan::sim::Environment(num_nodes, sim_time) {  }

  virtual void initialize()
  {

  }

  virtual void add_tasks(const arisan::sim::time t)
  {

  }
};

int main()
{
  MyEnv env(NUM_NODES, SIM_TIME);
  env.start_sim();

  return (0);
}


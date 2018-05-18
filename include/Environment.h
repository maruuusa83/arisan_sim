/* Copyright (c) 2018 Daichi Teruya                             */
/* Released under the MIT License                               */
/* https://github.com/maruuusa83/arisan_sim/blob/master/LICENSE */

#ifndef INCLUDE_ENVIRONMENT_H_
#define INCLUDE_ENVIRONMENT_H_

namespace arisan {
namespace sim {

using time = unsigned int;

class Environment
{
public:
  Environment(const unsigned int num_nodes, const time sim_time);
  void start_sim();

private:
  virtual void initialize();
  virtual void add_tasks(const time t);

  const unsigned int NUM_NODES;
  const time SIM_TIME;
};

}
}

#endif // INCLUDE_ENVIRONMENT_H_


/* Copyright (c) 2018 Daichi Teruya                             */
/* Released under the MIT License                               */
/* https://github.com/maruuusa83/arisan_sim/blob/master/LICENSE */

#ifndef INCLUDE_TASK_H_
#define INCLUDE_TASK_H_

#include <vector>

namespace arisan {
namespace sim {

struct _Task
{
  unsigned int process_id = 0;
  unsigned int t_start = 0;
  bool is_finished = false;
};

using Task = struct _Task;

}
}

#endif // INCLUDE_TASK_H_


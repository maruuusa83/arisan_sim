/* Copyright (c) 2018 Daichi Teruya                             */
/* Released under the MIT License                               */
/* https://github.com/maruuusa83/arisan_sim/blob/master/LICENSE */

#include "Task.h"
#include "Node.h"

#include <gtest/gtest.h>
#include <gtest/internal/gtest-port.h>

#include <algorithm>
#include <vector>

namespace {

class testNode : public ::testing::Test{
protected:
  static const int TASK_NUM = 100;

  std::vector<arisan::sim::Task *> tasks;

  virtual void SetUp()
  {
    for (int i = 0; i < TASK_NUM; i++){
      tasks.push_back(new arisan::sim::Task);
    }
  }
};

TEST_F(testNode, select_task)
{
  arisan::sim::Node node;

  node.select_task(0, tasks);
}

}


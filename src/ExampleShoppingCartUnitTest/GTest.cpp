/*
*
* Copyright(c) 2018 Bohemia Interactive Simulations, Inc.
* http://www.bisimulations.com
*
* For information about the licensing and copyright of this software please
* contact Bohemia Interactive Simulations, Inc. at contact @ bisimulations.com.
*
*/
#include <gtest/gtest.h>

int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);
  auto gtest_result = RUN_ALL_TESTS();
  //If not specifying an output xml file
  if (testing::GTEST_FLAG(output).empty())
  {
    std::getchar(); // keep console window open until Return keystroke
  }
  return gtest_result;
}

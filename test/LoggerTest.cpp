/**
 Logger test file
 */
#include "logger.h"
#include <gtest/gtest.h>

class LoggerTest : public ::testing::Test {
protected:
  using Logger = systems::log::Logger;
  void SetUp() {}
  void TearDown() {}
};

TEST_F(LoggerTest, SetLogLevel) {
  Logger logobj = Logger::GetInstance();
  logobj.SetLogLevel(systems::log::LogLevel::WARN);
  ASSERT_EQ(logobj.GetLogLevel(), systems::log::LogLevel::WARN);
}
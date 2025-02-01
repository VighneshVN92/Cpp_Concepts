#include "BreakingSystem.h"
#include "logger.h"
#include <iostream>

using namespace std;

int main() {

#if defined(__cplusplus)
  std::cout << "C++ version: " << __cplusplus << std::endl;
#else
  std::cout << "C++ version not defined" << std::endl;
#endif

  systems::log::Logger log = systems::log::Logger::GetInstance();
  BreakingSystem Break(log); // should use how the factory should be introduced
  Break.Start();
  Break.Stop();
  Break.Work();
}
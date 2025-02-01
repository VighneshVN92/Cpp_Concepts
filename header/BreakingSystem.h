#ifndef BREAKINGSYSTEM_H
#define BREAKINGSYSTEM_H

#include "VehicleSystemInterface.h"
#include "logger.h"
class BreakingSystem : public VehicleSystemInterface {
public:
  void Start() override;
  void Stop() override;
  void Work() override;
  bool GetStatus() override;
  BreakingSystem(systems::log::Logger &logInstance) : m_log(logInstance) {}

private:
  systems::log::Logger const &m_log;
};

#endif // BREAKINGSYSTEM_H
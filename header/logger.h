#ifndef LOGGER_H
#define LOGGER_H
#include <_types/_uint8_t.h>
#include <cstdint>
#include <iostream>
#include <string>

namespace systems {
namespace log {

enum class LogLevel : std::uint8_t { DEBUG, INFO, WARN, ERROR };

class Logger {
public:
  static Logger &GetInstance() {
    static Logger log_intance; // singleton instance
    return log_intance;
  }
  void SetLogLevel(LogLevel loglevel) { m_loglevel = loglevel; }

  LogLevel GetLogLevel() { return m_loglevel; }

  void log(std::string str, std::string level) const {
    std::cout << "[ " << level << "]" << str;
  }

private:
  LogLevel m_loglevel = LogLevel::DEBUG;
};

} // namespace log
} // namespace systems
#endif // LOGGER_H

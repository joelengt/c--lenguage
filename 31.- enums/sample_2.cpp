#include <iostream>

class Log {
  public:
    enum Level {
      LevelError = 0, LevelWarning, LevelInfo
    };

  private:
    Level m_LogLevel1 = LevelInfo;

  public:
    void SetLevel(int level) {
      m_LogLevel1 = level;
    }

    void Error(const char* message) {
      if (m_LogLevel1 >= LevelError) {
        std::cout << "[ERROR]:" << message << std::endl;
      }
    }

    void Warn(const char* message) {
      if (m_LogLevel1 >= LevelWarning) {
        std::cout << "[ERROR]:" << message << std::endl;
      }
    }

    void Info(const char* message) {
      if (m_LogLevel1 >= LevelInfo) {
        std::cout << "[ERROR]:" << message << std::endl;
      }
    }
}

int main() {
  Log log;
  log.SetLevel(log::LevelInfo);
  log.Warn("Hello1");
  log.Error("Hello1");
  log.Info("Hello1");
  std::cin.get();
}
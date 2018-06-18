#include <iostream>

class Log
{
    public:
        const int LogLevelError = 0;
        const int LogLevelWarning = 1;
        const int LogLevelInfo = 2;
    private:
        int m_LogLevel1 = LogLevelInfo;
    public:
        void SetLevel(int level)
        {
            m_LogLevel1 = level;
        }

        void Error(const char* message)
        {
            if (m_LogLevel1 >= LogLevelError)
            {
                std::cout << "[ERROR]:" << message << std::endl;
            }
        }

        void Warn(const char* message)
        {
            if (m_LogLevel1 >= LogLevelWarning)
            {
                std::cout << "[ERROR]:" << message << std::endl;
            }
        }

        void Info(const char* message)
        {
            if (m_LogLevel1 >= LogLevelInfo) {
                std::cout << "[ERROR]:" << message << std::endl;
            }
        }
}


int main()
{
  Log log;
  log.SetLevel(log.LogLevelError);
  log.Warn("Hello1");
  log.Error("Hello1");
  log.Info("Hello1");
  std::cin.get();
}
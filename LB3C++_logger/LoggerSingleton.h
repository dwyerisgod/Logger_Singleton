//---------------------------------------------------------------------------

#ifndef LoggerSingletonH
#define LoggerSingletonH

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

class Logger {
private:
    std::ofstream logFile;

    Logger() {
        // ��������� ���� ��� ������ �����
        logFile.open("logfile.txt", std::ios::app);
        if (!logFile.is_open()) {
            std::cerr << "������ �������� ����� �����." << std::endl;
        }
    }

public:
    static Logger& getInstance() {
        static Logger instance; // ������� ��������� ������ ��� ������ ������
        return instance;
    }

    // ������� ��� ������ ����
    void log(const std::string& message) {
        // �������� ������� �����
        time_t currentTime;
        struct tm* timeInfo;
        char buffer[80];
        time(&currentTime);
        timeInfo = localtime(&currentTime);
        strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeInfo);

        // ���������� � ����
        logFile << "[" << buffer << "] " << message << std::endl;
    }
};


#endif


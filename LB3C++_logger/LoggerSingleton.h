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
        // Открываем файл для записи логов
        logFile.open("logfile.txt", std::ios::app);
        if (!logFile.is_open()) {
            std::cerr << "Ошибка открытия файла логов." << std::endl;
        }
    }

public:
    static Logger& getInstance() {
        static Logger instance; // Создаем экземпляр только при первом вызове
        return instance;
    }

    // Функция для записи лога
    void log(const std::string& message) {
        // Получаем текущее время
        time_t currentTime;
        struct tm* timeInfo;
        char buffer[80];
        time(&currentTime);
        timeInfo = localtime(&currentTime);
        strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeInfo);

        // Записываем в файл
        logFile << "[" << buffer << "] " << message << std::endl;
    }
};


#endif


//
// Created by admin on 25/03/2024.
//

#ifndef TP_CPP_LOGGEROUTADAPTER_H
#define TP_CPP_LOGGEROUTADAPTER_H
#include "StdOutLogger.h"
#include "FileOutLogger.h"
#include <string>
class LoggerOutAdapter {
private:
    StdOutLogger stdOutLogger;
    FileOutLogger fileOutLogger;
    std::string method;
public:
    LoggerOutAdapter(std::string method);
    void Display(std::string message);
private:
    std::string getMethod();
};


#endif //TP_CPP_LOGGEROUTADAPTER_H

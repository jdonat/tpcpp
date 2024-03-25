//
// Created by admin on 25/03/2024.
//

#include "LoggerOutAdapter.h"
#include "StdOutLogger.h"
#include "FileOutLogger.h"
#include <string>
#include <iostream>
LoggerOutAdapter::LoggerOutAdapter(std::string method){
    stdOutLogger = StdOutLogger();
    fileOutLogger = FileOutLogger();
    this->method = method;
}
void LoggerOutAdapter::Display(std::string message){
    if(LoggerOutAdapter::getMethod() == "cout"){
        StdOutLogger::Display(message);
    }
    else {
        if(LoggerOutAdapter::getMethod() == "file"){
            FileOutLogger::StoreLog(message);
        }
        else
        {
            StdOutLogger::Display("Erreur : La méthode du logger n est ni cout ni file, method= "+method);
        }
    }
}
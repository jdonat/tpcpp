//
// Created by admin on 25/03/2024.
//

#include "LoggerOutAdapter.h"
#include "StdOutLogger.h"
#include "FileOutLogger.h"
#include <string>
#include <iostream>
LoggerOutAdapter::LoggerOutAdapter(){
    stdOutLogger = StdOutLogger();
    fileOutLogger = FileOutLogger();
}
void LoggerOutAdapter::Display(std::string message, std::string method){
    if(method == "cout"){
        StdOutLogger::Display(message);
    }
    else {
        if(method == "file"){
            FileOutLogger::StoreLog(message);
        }
        else
        {
            StdOutLogger::Display("Erreur : La méthode du logger n est ni cout ni file, method= "+method);
        }
    }
}
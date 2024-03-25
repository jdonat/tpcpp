//
// Created by admin on 25/03/2024.
//

#include "Logger.h"
#include "LoggerOutAdapter.h"
#include <string>
Log::Log(){
    this->loggerOutAdapter = LoggerOutAdapter("console");
}
void Logger::Log(std::string message){
    loggerOutAdapter.Display(message);
}
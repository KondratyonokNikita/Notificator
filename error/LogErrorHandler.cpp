//
// Created by Nikita Kondratyonok on 11/16/20.
//

#include "LogErrorHandler.h"

LogErrorHandler::LogErrorHandler(std::ostream &log) : log(log) {}

void LogErrorHandler::handle(const Error &error) const {
    log << error.message << std::endl;
}

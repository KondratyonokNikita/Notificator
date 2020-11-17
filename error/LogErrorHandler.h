//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_LOGERRORHANDLER_H
#define NOTIFICATOR_LOGERRORHANDLER_H

#include <iostream>

#include "ErrorHandler.h"

class LogErrorHandler : public ErrorHandler {
public:
    std::ostream& log;

    LogErrorHandler(std::ostream& log);
    void handle(const Error* error) const;
};


#endif //NOTIFICATOR_LOGERRORHANDLER_H

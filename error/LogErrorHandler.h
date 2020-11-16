//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_LOGERRORHANDLER_H
#define NOTIFICATOR_LOGERRORHANDLER_H

#include "ErrorHandler.h"

class LogErrorHandler : ErrorHandler {
public:
    void handle(const Error& error) const override;
};


#endif //NOTIFICATOR_LOGERRORHANDLER_H

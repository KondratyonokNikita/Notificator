//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_ERRORHANDLER_H
#define NOTIFICATOR_ERRORHANDLER_H

#include "Error.h"

// interface
class ErrorHandler {
public:
    virtual void handle(const Error& error) const = 0;
};


#endif //NOTIFICATOR_ERRORHANDLER_H

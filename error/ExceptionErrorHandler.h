//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_EXCEPTIONERRORHANDLER_H
#define NOTIFICATOR_EXCEPTIONERRORHANDLER_H

#include "ErrorHandler.h"

class ExceptionErrorHandler : public ErrorHandler {
public:
    void handle(const Error* error) const;
};


#endif //NOTIFICATOR_EXCEPTIONERRORHANDLER_H

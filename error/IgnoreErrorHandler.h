//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_IGNOREERRORHANDLER_H
#define NOTIFICATOR_IGNOREERRORHANDLER_H

#include "ErrorHandler.h"

class IgnoreErrorHandler : ErrorHandler {
public:
    void handle(const Error& error) const override;
};


#endif //NOTIFICATOR_IGNOREERRORHANDLER_H

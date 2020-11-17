//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_NOTIFICATOR_H
#define NOTIFICATOR_NOTIFICATOR_H

#include <vector>

#include "../error/Error.h"
#include "../error/ErrorHandler.h"
#include "../recipient/Contact.h"
#include "../message/Message.h"

// interface
class Notificator {
public:
    ErrorHandler* errorHandler = nullptr;

    virtual void notify(Message* message, std::vector<Contact*>& contacts) const = 0;
};


#endif //NOTIFICATOR_NOTIFICATOR_H

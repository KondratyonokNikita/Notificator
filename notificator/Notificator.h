//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_NOTIFICATOR_H
#define NOTIFICATOR_NOTIFICATOR_H

#include <list>

#include "../error/Error.h"
#include "../error/ErrorHandler.h"
#include "../recipient/Contact.h"
#include "../message/Message.h"

// interface
class Notificator {
public:
    virtual void notify(const std::list<Contact>& contacts, const Message& message) const = 0;

protected:
    virtual ErrorHandler& getErrorHandler() const = 0;

    void handleError(const Error& error) {
        getErrorHandler().handle(error);
    }
};


#endif //NOTIFICATOR_NOTIFICATOR_H

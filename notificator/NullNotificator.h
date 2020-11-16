//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_NULLNOTIFICATOR_H
#define NOTIFICATOR_NULLNOTIFICATOR_H

#include "Notificator.h"

class NullNotificator : Notificator {
public:
    void notify(const std::list<Contact>& contacts, const Message& message) const override;

protected:
    ErrorHandler& getErrorHandler() const override;
};


#endif //NOTIFICATOR_NULLNOTIFICATOR_H

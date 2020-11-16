//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_EMAILNOTIFICATOR_H
#define NOTIFICATOR_EMAILNOTIFICATOR_H

#include "Notificator.h"

class EmailNotificator : Notificator {
public:
    void notify(const std::list<Contact>& contacts, const Message& message) const override;

protected:
    ErrorHandler& getErrorHandler() const override;
};


#endif //NOTIFICATOR_EMAILNOTIFICATOR_H

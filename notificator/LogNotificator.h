//
// Created by Nikita Kondratyonok on 11/17/20.
//

#ifndef NOTIFICATOR_LOGNOTIFICATOR_H
#define NOTIFICATOR_LOGNOTIFICATOR_H

#include "Notificator.h"
#include "../recipient/Contact.h"
#include "../recipient/LogRecipient.h"
#include "../message/TextMessage.h"

class LogNotificator : public Notificator {
public:
    void notify(Message* message, std::vector<Contact*>& contacts) const;

private:
    void notify(TextMessage *message, LogRecipient *recipient) const;
};


#endif //NOTIFICATOR_LOGNOTIFICATOR_H

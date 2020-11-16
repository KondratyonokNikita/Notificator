//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_TELEGRAMNOTIFICATOR_H
#define NOTIFICATOR_TELEGRAMNOTIFICATOR_H

#include "Notificator.h"

class TelegramNotificator : Notificator {
public:
    void notify(const std::list<Contact>& contacts, const Message& message) const override;

protected:
    ErrorHandler& getErrorHandler() const override;
};


#endif //NOTIFICATOR_TELEGRAMNOTIFICATOR_H

//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_TELEGRAMNOTIFICATOR_H
#define NOTIFICATOR_TELEGRAMNOTIFICATOR_H

#include <vector>

#include "Notificator.h"
#include "../error/ErrorHandler.h"

class TelegramNotificator : public Notificator {
public:
    void notify(const Message* message, const std::vector<Contact*>& contacts) const;
};


#endif //NOTIFICATOR_TELEGRAMNOTIFICATOR_H

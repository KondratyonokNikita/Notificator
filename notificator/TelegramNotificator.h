//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_TELEGRAMNOTIFICATOR_H
#define NOTIFICATOR_TELEGRAMNOTIFICATOR_H

#include <vector>

#include "Notificator.h"
#include "../error/ErrorHandler.h"

class TelegramNotificator : Notificator {
public:
    void notify(const Message& message, const std::vector<Contact>& contacts) const override;

protected:
    [[nodiscard]] ErrorHandler& getErrorHandler() const override;
};


#endif //NOTIFICATOR_TELEGRAMNOTIFICATOR_H

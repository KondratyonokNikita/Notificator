//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_EMAILNOTIFICATOR_H
#define NOTIFICATOR_EMAILNOTIFICATOR_H

#include <vector>

#include "Notificator.h"
#include "../error/ErrorHandler.h"

class EmailNotificator : Notificator {
public:
    void notify(const Message& message, const std::vector<Contact>& contacts) const override;

protected:
    [[nodiscard]] ErrorHandler& getErrorHandler() const override;
};


#endif //NOTIFICATOR_EMAILNOTIFICATOR_H

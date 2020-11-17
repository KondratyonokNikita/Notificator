//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_NULLNOTIFICATOR_H
#define NOTIFICATOR_NULLNOTIFICATOR_H

#include <vector>

#include "Notificator.h"
#include "../error/ErrorHandler.h"

class NullNotificator : public Notificator {
public:
    void notify(const Message* message, const std::vector<Contact*>& contacts) const;
};


#endif //NOTIFICATOR_NULLNOTIFICATOR_H

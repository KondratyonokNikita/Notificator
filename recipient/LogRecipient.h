//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_LOGRECIPIENT_H
#define NOTIFICATOR_LOGRECIPIENT_H

#include "Recipient.h"
#include <iostream>

class LogRecipient : public Recipient {
public:
    std::ostream& log;

    LogRecipient(std::ostream& log);
};


#endif //NOTIFICATOR_LOGRECIPIENT_H

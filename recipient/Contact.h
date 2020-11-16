//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_CONTACT_H
#define NOTIFICATOR_CONTACT_H

#include <string>
#include <list>
#include "Recipient.h"

class Contact {
public:
    const std::string name;
    const std::list<Recipient> recipients;
};


#endif //NOTIFICATOR_CONTACT_H

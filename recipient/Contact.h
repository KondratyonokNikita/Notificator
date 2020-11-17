//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_CONTACT_H
#define NOTIFICATOR_CONTACT_H

#include <string>
#include <vector>
#include "Recipient.h"

class Contact {
public:
    explicit Contact(std::string name);
    std::string name;
    std::vector<Recipient> recipients;
};


#endif //NOTIFICATOR_CONTACT_H

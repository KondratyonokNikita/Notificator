//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_TEXTMESSAGE_H
#define NOTIFICATOR_TEXTMESSAGE_H

#include "Message.h"

#include <string>

class TextMessage : public Message {
public:
    std::string text;

    explicit TextMessage(std::string text);
};


#endif //NOTIFICATOR_TEXTMESSAGE_H

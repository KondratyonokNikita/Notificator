//
// Created by Nikita Kondratyonok on 11/17/20.
//

#include "LogNotificator.h"

void LogNotificator::notify(Message* message, std::vector<Contact *>& contacts) const {
    auto* textMessage = dynamic_cast<TextMessage*>(message);
    if (textMessage != nullptr) {
        for (auto* contact: contacts) {
            std::cout << "[LogNotificator] notify : " << contact->name << std::endl;
            for (auto* recipient: contact->recipients) {
                auto* logRecipient = dynamic_cast<LogRecipient*>(recipient);
                if (logRecipient != nullptr) {
                    this->notify(textMessage, logRecipient);
                }
            }
        }
    } else {
        this->errorHandler->handle(new Error("The message type is not supported"));
    }
}

void LogNotificator::notify(TextMessage *message, LogRecipient *recipient) const {
    recipient->log << message->text;
}

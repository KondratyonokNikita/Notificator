//
// Created by Nikita Kondratyonok on 11/16/20.
//

#include "Manager.h"

void Manager::addNotificator(const std::string& name, Notificator* notificator) {
    this->notificators[name] = notificator;
}

void Manager::notify(const std::string& notificatorName,
                     Message* message,
                     std::vector<Contact*>& contactsVector) const {
    this->notificators.at(notificatorName)->notify(message, contactsVector);
}

void Manager::notifyAll(Message* message, std::vector<Contact*>& contactsVector) const {
    for (auto const& value: this->notificators) {
        this->notify(value.first, message, contactsVector);
    }
}

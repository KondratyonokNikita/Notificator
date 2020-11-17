//
// Created by Nikita Kondratyonok on 11/16/20.
//

#include "Manager.h"

void Manager::addNotificator(const std::string& name, Notificator* notificator) {
    this->notificators[name] = notificator;
}

void Manager::addContact(const std::string& name, Contact* contact) {
    this->contacts[name] = contact;
}

void Manager::notify(const std::string& notificatorName,
                     Message* message,
                     std::vector<Contact*>& contactsVector) const {
    this->notificators.at(notificatorName)->notify(message, contactsVector);
}

void Manager::notifyAllContacts(const std::string& notificatorName, Message* message) const {
    std::vector<Contact*> contactsVector;
    for (auto const& value: this->contacts) {
        contactsVector.push_back(value.second);
    }
    this->notify(notificatorName, message, contactsVector);
}

void Manager::notifyAllNotificators(Message* message, std::vector<Contact*>& contactsVector) const {
    for (auto const& value: this->notificators) {
        this->notify(value.first, message, contactsVector);
    }
}

void Manager::notifyAll(Message* message) const {
    for (auto const& value: this->notificators) {
        this->notifyAllContacts(value.first, message);
    }
}

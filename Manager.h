//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_MANAGER_H
#define NOTIFICATOR_MANAGER_H

#include <string>
#include <map>
#include <vector>

#include "message/Message.h"
#include "notificator/Notificator.h"

class Manager {
public:
    void addNotificator(const std::string& name, Notificator* notificator);
    void addContact(const std::string& name, Contact* contact);

    void notify(const std::string& notificatorName, Message* message, std::vector<Contact*>& contactsVector) const;
    void notifyAllContacts(const std::string& notificatorName, Message* message) const;
    void notifyAllNotificators(Message* message, std::vector<Contact*>& contactsVector) const;
    void notifyAll(Message* message) const;

private:
    std::map<std::string, Notificator*> notificators;
    std::map<std::string, Contact*> contacts;
};


#endif //NOTIFICATOR_MANAGER_H

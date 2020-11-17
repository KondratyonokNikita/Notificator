#include <iostream>
#include "Manager.h"
#include "recipient/LogRecipient.h"
#include "error/LogErrorHandler.h"
#include "notificator/LogNotificator.h"

void addNotificators(Manager* manager) {
    auto* errorHandler = new LogErrorHandler(std::cerr);
    auto* logNotificator = new LogNotificator();
    logNotificator->errorHandler = errorHandler;
    manager->addNotificator("log notificator", logNotificator);
}

int main() {
    auto* manager = new Manager();

    auto* firstContact = new Contact("First");
    firstContact->recipients.push_back(new LogRecipient(std::cout));

    auto* secondContact = new Contact("Second");
    secondContact->recipients.push_back(new LogRecipient(std::cout));

    auto* thirdContact = new Contact("Third");

    addNotificators(manager);

    {
        std::vector<Contact *> contacts = {firstContact, secondContact, thirdContact};
        manager->notifyAll(new TextMessage("Hello\n"), contacts);
    }
    {
        std::vector<Contact *> contacts = {firstContact};
        manager->notifyAll(new TextMessage("world\n"), contacts);
    }
    return 0;
}

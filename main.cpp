#include <iostream>
#include "Manager.h"
#include "recipient/LogRecipient.h"
#include "error/LogErrorHandler.h"
#include "notificator/LogNotificator.h"

int main() {
    auto* manager = new Manager();

    auto* firstContact = new Contact("First");
    firstContact->recipients.push_back(new LogRecipient(std::cout));

    manager->addContact("first", firstContact);

    auto* errorHandler = new LogErrorHandler(std::cerr);
    auto* logNotificator = new LogNotificator();
    logNotificator->errorHandler = errorHandler;

    manager->addNotificator("log notificator", logNotificator);

    auto* message = new TextMessage("Hello");

    manager->notifyAll(message);
    return 0;
}

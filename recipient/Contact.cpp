//
// Created by Nikita Kondratyonok on 11/16/20.
//

#include "Contact.h"

#include <utility>

Contact::Contact(std::string name) : name(std::move(name)), recipients(std::vector<Recipient>()) {}

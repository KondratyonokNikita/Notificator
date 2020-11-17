//
// Created by Nikita Kondratyonok on 11/16/20.
//

#include "Error.h"

#include <utility>

Error::Error(std::string message) : message(std::move(message)) {}

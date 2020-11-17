//
// Created by Nikita Kondratyonok on 11/16/20.
//

#include "ExceptionErrorHandler.h"

#include <stdexcept>

void ExceptionErrorHandler::handle(const Error* error) const {
    throw std::runtime_error(error->message);
}

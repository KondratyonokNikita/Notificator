//
// Created by Nikita Kondratyonok on 11/16/20.
//

#ifndef NOTIFICATOR_ERROR_H
#define NOTIFICATOR_ERROR_H

#include <string>

class Error {
public:
    const std::string message;

    explicit Error(std::string message);
};


#endif //NOTIFICATOR_ERROR_H

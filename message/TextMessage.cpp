//
// Created by Nikita Kondratyonok on 11/16/20.
//

#include "TextMessage.h"

#include <utility>

TextMessage::TextMessage(std::string text) : text(std::move(text)) {}

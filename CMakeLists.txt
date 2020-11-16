cmake_minimum_required(VERSION 3.17)
project(Notificator)

set(CMAKE_CXX_STANDARD 20)

add_executable(Notificator
        main.cpp

        notificator/Notificator.h
        notificator/NullNotificator.cpp
        notificator/NullNotificator.h
        notificator/EmailNotificator.cpp
        notificator/EmailNotificator.h
        notificator/TelegramNotificator.cpp
        notificator/TelegramNotificator.h

        message/TextMessage.cpp
        message/TextMessage.h
        message/Message.h
        message/BinaryMessage.cpp
        message/BinaryMessage.h

        error/ErrorHandler.h
        error/LogErrorHandler.cpp
        error/LogErrorHandler.h
        error/ExceptionErrorHandler.cpp
        error/ExceptionErrorHandler.h
        error/IgnoreErrorHandler.cpp
        error/IgnoreErrorHandler.h
        error/Error.cpp error/Error.h

        recipient/Recipient.h
        recipient/Contact.cpp
        recipient/Contact.h
        recipient/LogRecipient.cpp
        recipient/LogRecipient.h
        recipient/EmailRecipient.cpp
        recipient/EmailRecipient.h
        recipient/TelegramRecipient.cpp
        recipient/TelegramRecipient.h
        )

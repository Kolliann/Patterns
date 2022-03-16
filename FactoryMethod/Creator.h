#pragma once
#include "Character.h"

class Creator {

public:
    virtual ~Creator(){};
    virtual Character* FactoryMethod() const = 0;

    std::string Operation() const {
        // вызов фабричного метода, для получения объекта
        Character* character = this->FactoryMethod();
        // Далее, работаем с этим продуктом.
        std::string result = character->Name() + " ";
        return result;
    }
};
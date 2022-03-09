#pragma once
#include "Сharacter.h"

class Creator {

public:
    virtual ~Creator(){};
    virtual Сharacter* FactoryMethod() const = 0;

    std::string Operation() const {
        // вызов фабричного метода, для получения объекта
        Сharacter* character = this->FactoryMethod();
        // Далее, работаем с этим продуктом.
        std::string result = character->Health() + " ";
        return result;
    }
};
#pragma once
#include "Creator.h"
#include "Warrior.h"

class FirstWave : public Creator{

    Сharacter* FactoryMethod() const override{

        return new Warrior();
    };
};
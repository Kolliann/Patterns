#pragma once
#include "Creator.h"
#include "Warrior.h"

class FirstWave : public Creator{

    Character* FactoryMethod() const override{

        return new Warrior();
    };
};
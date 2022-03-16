#pragma once
#include "Creator.h"
#include "Bowman.h"

class SecondWave : public Creator{

    Character* FactoryMethod() const override{

        return new Bowman();
    };
};
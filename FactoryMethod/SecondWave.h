#pragma once
#include "Creator.h"
#include "Bowman.h"

class SecondWave : public Creator{

    Сharacter* FactoryMethod() const override{

        return new Bowman();
    };
};
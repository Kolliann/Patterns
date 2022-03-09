#pragma once
#include "Сharacter.h"
class Warrior : public Сharacter{

    std::string Name() const override {

        return "Warrior";
    };

    int Health() const override {

        return 50;
    };
};

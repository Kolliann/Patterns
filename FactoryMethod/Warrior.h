#pragma once
#include "Character.h"
class Warrior : public Character{

    std::string Name() const override {

        return "Warrior";
    };

    int Health() const override {

        return 50;
    };
};

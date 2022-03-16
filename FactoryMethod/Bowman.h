#pragma once
#include "Character.h"

class Bowman : public Character{

    std::string Name() const override {

        return "Bowman";
    };

    int Health() const override {

        return 25;
    };
};
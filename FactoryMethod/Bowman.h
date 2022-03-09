#pragma once
#include "Сharacter.h"

class Bowman : public Сharacter{

    std::string Name() const override {

        return "Bowman";
    };

    int Health() const override {

        return 25;
    };
};
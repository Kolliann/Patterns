#pragma once
#include <iostream>

class Character {

    public:
        virtual ~Character() {}
        virtual std::string Name() const = 0;
        virtual int Health() const = 0;
};

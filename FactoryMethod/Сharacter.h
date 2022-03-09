#pragma once
#include <iostream>

class Сharacter {

    public:
        virtual ~Сharacter() {}
        virtual std::string Name() const = 0;
        virtual int Health() const = 0;
};

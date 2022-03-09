#include "Singleton.h"
#include <iostream>

class Window {

public:

    Window(){}
    ~Window(){}

    void Open(){

        std::cout << "Open" << std::endl;
    }

};

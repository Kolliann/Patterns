#include "Window.h"

int main() {
    Window* obj = Singleton<Window>::Instance();
    obj->Open();
    return 0;
}

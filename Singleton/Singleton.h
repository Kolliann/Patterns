#pragma once

#include <cstddef>

template<typename T>
class Singleton{
public:
    static T* Instance() {
         T* _instance = new T();
        return _instance;
    }

protected:
    Singleton() = default;
    ~Singleton() = default;

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

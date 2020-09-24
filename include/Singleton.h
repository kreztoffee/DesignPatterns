#pragma once

class Singleton
{
public:
    Singleton(Singleton const &) = delete;
    void operator=(Singleton const &) = delete;
    static Singleton *getInstance();

private:
    static Singleton *instance;
    Singleton() = default;
    ~Singleton() = default;
};

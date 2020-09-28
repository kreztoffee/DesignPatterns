#pragma once

class AbstractPart
{
public:
    virtual ~AbstractPart() = default;
    virtual void doSomething() = 0;
    virtual void printName() = 0;

private:
};

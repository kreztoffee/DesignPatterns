#pragma once
#include "AbstractPart.h"

class ConcretePart : public AbstractPart
{
public:
    void doSomething() override;
    void printName() override;

private:
};

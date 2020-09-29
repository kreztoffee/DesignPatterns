#pragma once
#include "AbstractPart.h"

class AbstractProduct
{
public:
    virtual ~AbstractProduct() = default;
    virtual void doSomething() = 0;
    virtual void setPart(AbstractPart *part) = 0;
    virtual void setNumberOfThings(int numberOfThings) = 0;
    virtual void printState() = 0;

private:
};

#pragma once
#include "AbstractProduct.h"

class AbstractFactory
{
public:
    virtual ~AbstractFactory() = default;

    virtual AbstractProduct *createProductA() = 0;
    virtual AbstractProduct *createProductB() = 0;

private:
};

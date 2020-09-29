#pragma once
#include "AbstractFactory.h"

class ConcreteFactory : public AbstractFactory
{
public:
    AbstractProduct *createProductA() override;
    AbstractProduct *createProductB() override;

private:
};

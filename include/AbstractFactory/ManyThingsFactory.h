#pragma once
#include "AbstractFactory.h"

class ManyThingsFactory : public AbstractFactory
{
public:
    AbstractProduct *createProductA() override;
    AbstractProduct *createProductB() override;

private:
};

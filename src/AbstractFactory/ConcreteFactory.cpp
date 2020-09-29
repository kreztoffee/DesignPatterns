#include "ConcreteFactory.h"
#include "ProductA.h"
#include "ProductB.h"

AbstractProduct *ConcreteFactory::createProductA()
{
    return new ProductA();
}

AbstractProduct *ConcreteFactory::createProductB()
{
    return new ProductB();
}

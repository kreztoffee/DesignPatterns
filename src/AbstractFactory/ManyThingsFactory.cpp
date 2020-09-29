#include "ManyThingsFactory.h"
#include "ProductA.h"
#include "ProductB.h"

AbstractProduct *ManyThingsFactory::createProductA()
{
    AbstractProduct *product = new ProductA();
    product->setNumberOfThings(127);
    return product;
}

AbstractProduct *ManyThingsFactory::createProductB()
{
    AbstractProduct *product = new ProductB();
    product->setNumberOfThings(254);
    return product;
}

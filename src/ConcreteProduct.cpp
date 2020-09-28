#include "ConcreteProduct.h"
#include <iostream>

ConcreteProduct::~ConcreteProduct()
{
    if (part)
    {
        delete part;
    }
}

void ConcreteProduct::doSomething()
{
}

void ConcreteProduct::setPart(AbstractPart *part)
{
    this->part = part;
}

void ConcreteProduct::setNumberOfThings(int numberOfThings)
{
    this->numberOfThings = numberOfThings;
}

void ConcreteProduct::printState()
{
    std::cout << "I have " << numberOfThings << " thing(s)\n";
    std::cout << "I have a part named ";
    part->printName();
}

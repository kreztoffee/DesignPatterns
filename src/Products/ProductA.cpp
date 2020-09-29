#include "ProductA.h"
#include <iostream>

ProductA::~ProductA()
{
    if (part)
    {
        delete part;
    }
}

void ProductA::doSomething()
{
}

void ProductA::setPart(AbstractPart *part)
{
    this->part = part;
}

void ProductA::setNumberOfThings(int numberOfThings)
{
    this->numberOfThings = numberOfThings;
}

void ProductA::printState()
{
    std::cout << "I am a Product A\n";
    std::cout << "I have " << numberOfThings << " thing(s)\n";
    if (part)
    {
        std::cout << "I have a part named ";
        part->printName();
    }
}

#include "ProductB.h"
#include <iostream>

ProductB::~ProductB()
{
    if (part)
    {
        delete part;
    }
}

void ProductB::doSomething()
{
}

void ProductB::setPart(AbstractPart *part)
{
    this->part = part;
}

void ProductB::setNumberOfThings(int numberOfThings)
{
    this->numberOfThings = numberOfThings;
}

void ProductB::printState()
{
    std::cout << "I am a Product B\n";
    std::cout << "I have " << numberOfThings << " thing(s)\n";
    if (part)
    {
        std::cout << "I have a part named ";
        part->printName();
    }
}

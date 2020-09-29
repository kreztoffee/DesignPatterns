#pragma once
#include "AbstractProduct.h"

class ConcreteProduct : public AbstractProduct
{
public:
    ~ConcreteProduct();
    void doSomething() override;
    void setPart(AbstractPart *part) override;
    void setNumberOfThings(int numberOfThings) override;
    void printState() override;

private:
    AbstractPart *part = nullptr;
    int numberOfThings = 0;
};

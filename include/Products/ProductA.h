#pragma once
#include "AbstractProduct.h"

class ProductA : public AbstractProduct
{
public:
    ~ProductA();
    void doSomething() override;
    void setPart(AbstractPart *part) override;
    void setNumberOfThings(int numberOfThings) override;
    void printState() override;

private:
    AbstractPart *part = nullptr;
    int numberOfThings = 0;
};

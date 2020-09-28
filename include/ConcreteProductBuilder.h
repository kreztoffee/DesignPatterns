#pragma once
#include "AbstractProductBuilder.h"
#include "AbstractProduct.h"

class ConcreteProductBuilder : public AbstractProductBuilder
{
public:
    void reset() override;
    void withNumberOfThings(int numberOfThings) override;
    void withPart(AbstractPart *part) override;
    AbstractProduct *build();

private:
    AbstractProduct *product = nullptr;
};

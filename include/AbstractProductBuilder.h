#pragma once
#include "AbstractProduct.h"
#include "AbstractPart.h"

class AbstractProductBuilder
{
public:
    virtual ~AbstractProductBuilder() = default;
    virtual void reset() = 0;
    virtual void withNumberOfThings(int numberOfThings) = 0;
    virtual void withPart(AbstractPart *part) = 0;

private:
};

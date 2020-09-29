#pragma once
#include <memory>
#include "AbstractProductBuilder.h"
#include "ConcreteProduct.h"

class Director
{
public:
    void makeConcreteProduct(AbstractProductBuilder *builder);

private:
};

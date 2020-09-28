#include "ConcreteProductBuilder.h"
#include "ConcreteProduct.h"

void ConcreteProductBuilder::reset()
{
    product = new ConcreteProduct();
}

void ConcreteProductBuilder::withNumberOfThings(int numberOfThings)
{
    if (product)
    {
        product->setNumberOfThings(numberOfThings);
    }
}

void ConcreteProductBuilder::withPart(AbstractPart *part)
{
    if (product)
    {
        product->setPart(part);
    }
}

AbstractProduct *ConcreteProductBuilder::build()
{
    return product;
}

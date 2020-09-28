#include "Director.h"
#include "ConcretePart.h"

void Director::makeConcreteProduct(AbstractProductBuilder *builder)
{
    builder->reset();
    ConcretePart *part = new ConcretePart();
    builder->withNumberOfThings(5);
    builder->withPart(part);
}

#include <iostream>
#include "Singleton.h"
#include "ConcreteProductBuilder.h"
#include "AbstractProduct.h"
#include "Director.h"

int main()
{
	//Singleton *newInstance = Singleton::getInstance();

	Director director;
	ConcreteProductBuilder builder;
	director.makeConcreteProduct(&builder);
	AbstractProduct *product = builder.build();
	product->printState();
	return 0;
}

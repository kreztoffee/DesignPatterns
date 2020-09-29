#include <iostream>
#include "Singleton.h"
#include "ConcreteProductBuilder.h"
#include "AbstractProduct.h"
#include "Director.h"
#include "ConcreteFactory.h"
#include "ManyThingsFactory.h"

int main()
{
	//Singleton *newInstance = Singleton::getInstance();

	/*Director director;
	ConcreteProductBuilder builder;
	director.makeConcreteProduct(&builder);
	AbstractProduct *product = builder.build();
	product->printState();*/

	ConcreteFactory concreteFactory;
	AbstractProduct *productA1 = concreteFactory.createProductA();
	AbstractProduct *productB1 = concreteFactory.createProductB();

	productA1->printState();
	productB1->printState();

	ManyThingsFactory manyThingsFactory;
	AbstractProduct *productA2 = manyThingsFactory.createProductA();
	AbstractProduct *productB2 = manyThingsFactory.createProductB();

	productA2->printState();
	productB2->printState();

	return 0;
}

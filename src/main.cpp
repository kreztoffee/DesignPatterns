#include <iostream>
#include "Singleton.h"

int main()
{
	Singleton *newInstance = Singleton::getInstance();
	return 0;
}

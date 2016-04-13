#include <iostream>

#include "../../include/UndisclosedProject/basicClass.h"

namespace undisclosed_project
{
	myClass::myClass()
		: mPtr(NULL)						///< Initialized to 0
	{
		// Basic constructor shit
		mPtr = new int(10);
	}

	myClass::~myClass()
	{
		// Basic destructor
		delete mPtr;
		mPtr = NULL;
	}

	void myClass::printMyInt()
	{
		printf("My integer: %d", *mPtr);
		getchar();
	}
}

int main(int argc, const char* argv[])
{
	undisclosed_project::myClass* myClass = new undisclosed_project::myClass;

	myClass->printMyInt();
}
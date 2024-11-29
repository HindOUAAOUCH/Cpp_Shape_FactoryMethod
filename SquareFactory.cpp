#include "pch.h"
#include "SquareFactory.h"

SquareFactory::SquareFactory()
{
	cout << "const square factory " << endl;
}

Shapee* SquareFactory::create()
{
	return new Square();
}

SquareFactory::~SquareFactory()
{
	cout << "destruc square" << endl;
}

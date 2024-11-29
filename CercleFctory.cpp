#include "pch.h"
#include "CercleFctory.h"

CercleFctory::CercleFctory()
{
	cout << "const CercleFctory" << endl;
}

Shapee* CercleFctory::create()
{

	return new Cercle();
}



CercleFctory::~CercleFctory()
{
	cout << "destruc CercleFctory" << endl;

}

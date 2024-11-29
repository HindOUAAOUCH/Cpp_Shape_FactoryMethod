#pragma once
#include "ShapeFactory.h"
class CercleFctory :
    public ShapeFactory
{
private:
public:
    CercleFctory();
    Shapee* create() override;
    ~CercleFctory();
};


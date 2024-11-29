#pragma once
#include "pch.h"
#include "ShapeFactory.h"
class SquareFactory :
    public ShapeFactory
{
private:
public:
    SquareFactory();
    Shapee* create() override;
    ~SquareFactory();
};


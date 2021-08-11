#pragma once
#include "Color.h"

class ICurveDrawer 
{
public:
    virtual void Draw(float x, float y, Color color = Color(0, 0, 0, 100));
};
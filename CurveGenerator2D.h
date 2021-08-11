#pragma once
#include "ICurveDrawer.h"

class CurveGenerator2D
{
public:
    CurveGenerator2D();
    ~CurveGenerator2D();
    void AddCurveDrawer(ICurveDrawer drawer);
    void SetScale(int x, int y);
    void Draw();

private:
    int m_nScaleX;
    int m_nScaleY;
};
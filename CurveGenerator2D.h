#pragma once
#include "ICurveDrawer.h"

struct Point2D 
{
    int x, y;
};

struct ControlPoints 
{
    Point2D p1, p2, p3, p4;
};

struct Configs 
{

};

class CurveGenerator2D
{
public:
    CurveGenerator2D(int x, int y) : m_nScaleX(x), m_nScaleY(y) 
    {
        m_configs = Configs{};
    }
    ~CurveGenerator2D();
    void ChangeScale(int x, int y);
    Point2D* GetCurve(ControlPoints points);
    Point2D Plot(ControlPoints points, float t);

private:
    int m_nScaleX;
    int m_nScaleY;
    Configs m_configs;
};
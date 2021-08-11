#pragma once
#include "Point2D.h"

class CubicCurve
{
public:
    CubicCurve();
    CubicCurve(Point2D p1, Point2D p2, Point2D p3, Point2D p4) : m_p1(p1), m_p2(p2), m_p3(p3), m_p4(p4) {}
    ~CubicCurve();
    void SetPoint(Point2D p1, Point2D p2, Point2D p3, Point2D p4);

private:
    Point2D m_p1;
    Point2D m_p2;
    Point2D m_p3;
    Point2D m_p4;
};
#pragma once

class Point2D
{
public:
    Point2D() = delete;
    Point2D(float x, float y) : m_fX(x), m_fY(y) {}
    ~Point2D() = default;
    float GetX();
    float GetY();
private:
    float m_fX;
    float m_fY;
};
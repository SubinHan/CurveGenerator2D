#pragma once

class Color
{
public:
    Color() = delete;
    Color(int red, int green, int blue, int alpha) : m_nRed(red), m_nGreen(green), m_nBlue(blue), m_nAlpha(alpha) {}
    ~Color() = default;
    int GetRed();
    int GetGreen();
    int GetBlue();
    int GetAlpha();

private:
    int m_nRed;
    int m_nGreen;
    int m_nBlue;
    int m_nAlpha;
};
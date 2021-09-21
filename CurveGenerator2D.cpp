#include "CurveGenerator2D.h"

void CurveGenerator2D::ChangeScale(int x, int y)
{
    m_nScaleX = x;
    m_nScaleY = y;
}

Point2D* CurveGenerator2D::GetCurve(ControlPoints points, int num_samples) {
    float unit = 1 / (float)num_samples;
    
    Point2D* result = new Point2D[num_samples];

    for(int i = 0; i < num_samples; i++)
    {
        result[i] = Plot(points, unit * i);
    }

    return result;
}

Point2D CurveGenerator2D::Plot(ControlPoints points, float t) {
    float b0 = 1 - 3*t + 3*t*t - t*t*t;
    float b1 = 3*t - 6*t*t + 3*t*t*t;
    float b2 = 3*t*t - 3*t*t*t;
    float b3 = t*t*t;
    
    float x = points.p1.x * b0 + points.p2.x * b1 + points.p3.x * b2 + points.p4.x * b3;
    float y = points.p1.y * b0 + points.p2.y * b1 + points.p3.y * b2 + points.p4.y * b3;
    
    return Point2D{x, y};
}

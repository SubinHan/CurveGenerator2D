#include <iostream>
#include "CurveGenerator2D.h"

#define MAX_HEIGHT 30
#define MAX_WIDTH 120
#define NUM_SAMPLES 150

int main()
{
    char buffer[MAX_HEIGHT][MAX_WIDTH];
    CurveGenerator2D generator(MAX_WIDTH, MAX_HEIGHT);

    for(int i = 0; i < MAX_HEIGHT; i++)
    {
        for(int j = 0; j < MAX_WIDTH; j++)
        {
            buffer[i][j] = ' ';
        }
    }

    ControlPoints bezier{Point2D{5, 2}, Point2D{40, 1}, Point2D{80, 25}, Point2D{110, 25}};

    Point2D* points = generator.GetCurve(bezier, NUM_SAMPLES);

    for(int i = 0; i < NUM_SAMPLES; i++)
    {
        std::cout << points->x << points->y << std::endl;
        buffer[(int)points->y][(int)points->x] = '#';
        points++;
    }

    for(int i = 0; i < MAX_HEIGHT; i++)
    {
        for(int j = 0; j < MAX_WIDTH; j++)
        {
            std::cout << buffer[i][j];
        }
    }

    return 0;
}
#include "Canvas.h"
#include <string.h>
#include <iostream>
#include <cstdarg>

Canvas::Canvas(int width, int height)
{
    this->lines = height;
    this->columns = width;
    for (int i = 0; i < lines; i++)
        for (int j = 0; j < columns; j++)
            mat[i][j] = ' ';
    Clear();
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) //deseneaza un romb, cercul nu imi iese
{
    int contor = 1;
    for (int i = y-ray; i <= y; i++)
     {
            mat[i][x-contor] = ch; 
            mat[i][x+contor] = ch;
            contor+=3;
     }
    contor -= 3;
    for (int i = y; i <= y+ray; i++)
    {
        mat[i][x - contor] = ch;
        mat[i][x + contor] = ch;
        contor -= 3;
    }
    
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
    int contor = 1;
    for (int i = y - ray + 1; i <= y; i++)
    {
        for (int j = x - contor; j <= x + contor; j++)
            mat[i][j] = ch;
        contor+=3;
    }
    contor -= 3;
    for (int i = y ; i <= y+ray-1; i++)
    {
        for (int j = x - contor; j <= x + contor; j++)
            mat[i][j] = ch;
        contor -= 3;
    }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
    for (int i = left; i <= right; i++)
    {
        mat[top][i] = ch;
        mat[bottom][i] = ch;
    }
    for (int i = top; i <= bottom; i++)
    {
        mat[i][left] = ch;
        mat[i][right] = ch;
    }
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
    for (int i = top + 1; i < bottom; i++)
        for (int j = left + 1; j < right; j++)
            mat[i][j] = ch;
}

void Canvas::SetPoint(int x, int y, char ch)
{
    mat[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
    int dx = x2 - x1;
    int dy = y2 - y1;
    int D = 2 * dy - dx;
    int y = y1;
    for (int x = x1; x <= x2; x++)
    {
        mat[x][y] = ch;
        if (D > 0)
        {
            y = y + 1;
            D = D - 2 * dx;
        }
        D = D + 2 * dy;
    }
}

void Canvas::Print()
{
    for (int i = 0; i < this->lines; i++) {
        for (int j = 0; j < this->columns; j++) {
            std::cout << mat[i][j];
        }
        std::cout << '\n';
    }
}

void Canvas::Clear()
{
	memset(mat, ' ', sizeof(mat));
}

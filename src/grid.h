#pragma once
#include <vector>
#include <raylib.h>

using namespace std;

class Grid
{
private:
    int numRows;
    int numCols;
    int cellSize;
    vector<Color> colors;
    vector<Color> GetCellColor();

public:
    Grid();
    int grid[20][10];
    void Initialize();
    void print();
    void Draw();
};


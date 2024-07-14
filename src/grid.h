#pragma once
#include <raylib.h>
#include <vector>

using namespace std;

class Grid {
private:
  int numRows;
  int numCols;
  int cellSize;
  vector<Color> colors;

public:
  Grid();
  int grid[20][10];
  void Initialize();
  void print();
  void Draw();
};

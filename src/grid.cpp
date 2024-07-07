
#include "grid.h"
#include "colors.h"
#include <iostream>


using namespace std;

// Construction of the class
Grid ::Grid() {
  numRows = 20; // 20
  numCols = 10;
  cellSize = 30; // 30
  Initialize();
  colors = getCellColors();
}

// initialize method

void Grid ::Initialize() {
  for (int row = 0; row < numRows; row++) {
    for (int colum = 0; colum < numCols; colum++) {
      grid[row][colum] = 0;
    }
  }
}

// Implementation of the method print

void Grid ::print() {
  for (int row = 0; row < numRows; row++) {
    for (int colum = 0; colum < numCols; colum++) {
      cout << grid[row][colum] << " ";
    }
    cout << endl;
  }
}

// Metho draw

void Grid::Draw() {

  for (int row = 0; row < numRows; row++) {
    for (int colum = 0; colum < numCols; colum++) {
      int cellValue = grid[row][colum];
      DrawRectangle(colum * cellSize + 1, row * cellSize + 1, cellSize - 1,
                    cellSize - 1, colors[cellValue]);
    }
  }
}
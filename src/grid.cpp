#include "grid.h"
#include <iostream>

using namespace std;

// Construction of the class
Grid ::Grid() {
  numRows = 20;
  numCols = 10;
  cellSize = 30;
  Initialize();
  colors = GetCellColor();
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

// Method Get Cell colors

vector<Color> Grid::GetCellColor() {
  Color darkGrey = {26, 31, 40, 255};
  Color green = {47, 230, 23, 255};
  Color red = {232, 18, 18, 255};
  Color orange = {226, 116, 17, 255};
  Color yellow = {237, 234, 4, 255};
  Color purple = {166, 0, 247, 255};
  Color cyan = {21, 204, 209, 255};
  Color blue = {13, 64, 216, 255};
  return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
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
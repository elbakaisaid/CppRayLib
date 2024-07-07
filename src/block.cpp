#include "block.h"
#include "Position.h"

using namespace std;

block::block() {
  cellSize = 30;
  rotationState = 0;
  colors = getCellColors();
}

void block ::Draw() 
{
    vector<Position> tiles = cells[rotationState];
    for(Position item:tiles)
    {
      DrawRectangle(item.colum * cellSize + 1, item.row + 1 * cellSize + 1,
                    cellSize - 1, cellSize - 1, colors[id]);
    }
}
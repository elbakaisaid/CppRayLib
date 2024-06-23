#include "grid.h"
#include <raylib.h>

int main() {
  Color backGround = {44, 44, 127, 255};
  InitWindow(300, 600, "raylib Tetris");
  SetTargetFPS(60);

  Grid grid = Grid();
  grid.print();

  while (WindowShouldClose() == false) {
    BeginDrawing();
    ClearBackground(backGround);
    grid.Draw();

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
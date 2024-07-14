#pragma once
#include "Position.h"
#include "colors.h"
#include <map>
#include <vector>

using namespace std;

class block {
private:
  int cellSize;
  int rotationState;
  vector<Color> colors;

public:
  block();
  void Draw();
  int id;
  map<int, vector<Position>> cells;
  ~block();
};

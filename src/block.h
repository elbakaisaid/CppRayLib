#pragma once
#include "Position.h"
#include <map>
#include <vector>
#include "colors.h"

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

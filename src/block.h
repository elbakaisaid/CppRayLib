#pragma once
#include "Position.h"
#include <map>
#include <vector>
using namespace std;

class block {
private:
    int cellSize;
    int rotationState;


public:
  block();
  int id;
  map<int, vector<Position>> cells;
  ~block();
};

block::block() {}

block::~block() {}

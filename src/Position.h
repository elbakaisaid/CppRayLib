#pragma once

class Position
{
private:
    /* data */
public:
    Position(int row, int colum);
    int row;
    int colum;
    ~Position();
};


Position::~Position()
{
    
}

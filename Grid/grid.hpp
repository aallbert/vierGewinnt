#ifndef GRID_HPP_INCLUDED
#define GRID_HPP_INCLUDED
#include <iostream>

class Grid {
private:
    int grid [7][6] = {0};
    int playerTurn;
public:
    Grid()
    :playerTurn(1){};
    int ** getGrid();
    bool checkForWin();
    void handleMovePos(int pos);
    void drawGrid();
};

#endif
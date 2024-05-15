#ifndef CELL_H
#define CELL_H
#include "GameBoard.h"

template <typename T, std::size_t Row, std::size_t Col>
class Cell {


private:
    bool m_is_alive{}; //  Keeps track of if the cell is alive
    int m_row_index{}; // row index
    int m_col_index{}; // column index

public:
    Cell(bool is_alive, int row, int col); 

    // Getters
    int getIsAlive() { return m_is_alive;}
    int getRowIndex() { return m_row_index;}
    int getColIndex() {return m_col_index;}

    // we do not need to ever update the row and column so we will NOT create those
    bool setIsAlive(Array2D<Cell, std::size_t Row, std::size_t Col> &cells) {

    }

};

#endif
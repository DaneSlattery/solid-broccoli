//grid.h
//include guard
#ifndef GRID_H
#define GRID_H

//forward declared dependencies
//class Cell;

#include <iostream>
#include <vector>
#include "cell.h"

// the grid class is a 2D array of cells, with a variable size
// 0,0 is top left.
class Grid
{
private:
	int m_size_width;
	int m_size_depth;
	std::vector< std::vector <Cell> > m_cell_array; //2D vector for dynamic array
public:
	Grid();
	Grid(int, int); //Grid constructor, setting the array width and depth
	void RandomiseFood();
};

#endif
//grid.h
.
#include "cell.h"
#ifndef GRID_H
#define GRID_H

// the grid class is a 2D array of cells, with a variable size
// 0,0 is top left.
class Grid
{
private:
	int m_size_width;
	int m_size_depth;
	Cell m_cell_array[][];
public:
	Grid(int, int); //Grid constructor, setting the array width and depth
};

#endif GRID_H
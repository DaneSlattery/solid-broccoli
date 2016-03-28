//cell.h
//include guard
#ifndef CELL_H
#define CELL_H

//included dependencies
#include <iostream>

// the cell class defines 1 block in our grid
class Cell
{
private:
	int m_width;
	int m_depth;   //The co-ords of this cell 0,0 is top left
	bool m_food;
public:
	Cell();
	Cell(int, int); //cell constructor
};

#endif
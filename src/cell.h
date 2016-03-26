//cell.h
#ifndef CELL_H
#define CELL_H

// the cell class defines 1 block in our grid
class Cell
{
private:
	int m_width;
	int m_depth;   //The co-ords of this cell 0,0 is top left
public:
	Cell(int, int); //cell constructor
};

#endif
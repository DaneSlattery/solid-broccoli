//cell.h
#ifndef CELL_H
#define CELL_H

class Cell
{
private:
	int m_width;
	int m_depth;   //The co-ords of this cell 0,0 is top left
public:
	Cell(int, int);
	void Debug();
};

#endif
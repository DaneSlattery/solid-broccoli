//cell.h
// the cell class defines 1 block in our grid

//include guard
#ifndef CELL_H
#define CELL_H

//included dependencies
#include <iostream> // cout

// the cell class defines 1 block in our grid
class Cell
{
public:
	int iX;
	int iY;   		//The co-ords of this cell 0,0 is top left
	bool bFood;
public:
	Cell(void); 		//default constructor
	Cell(int, int);	//cell constructor
	void SetFood(bool);	//function to set bFood, called externally by grid.cpp
	bool isFood(void);	//is there food on this cell?
};


/*----------------------END-------------------*/
#endif
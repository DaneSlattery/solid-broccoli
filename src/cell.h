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
private:
    bool bFood;             //variable to say if there is food 
    int iStatus;            //occupation variable 0: empty, 1: food, 2: snake
public:
    Cell(void);             //cell constructor
    void SetStatus(int);	//set the status variable
    int GetStatus(void);	//return this cells occupation status 0: empty, 1: food, 2: snake
};


/*----------------------END-------------------*/
#endif
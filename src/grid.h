//grid.h
// the grid class is a 2D array of cells, with a variable size.

//include guard
#ifndef GRID_H
#define GRID_H

//included dependencies
#include <iostream>     // cout
#include <vector> 	// vector
#include <stdlib.h>     // srand and rand
#include <time.h> 	// time
#include <sstream>      // string stream for empty array
#include "cell.h"	// cell definition

// the grid class is a 2D array of cells, with a variable size
// 0,0 is top left.
class Grid
{
private:
    int iWidth;				//width of playing field
    int iDepth;				//depth of playing field
    int iFoodX;                             //
    int iFoodY;				//where the food is
    int iRandValue;                         //the random position in the empty vector to use;
    bool bFoodPlaced;                       //is food placed?
    bool bFoodEaten;                        //is food eaten?
    std::vector< std::vector <Cell> > v2CellArray; //2D vector for dynamic array
    std::vector<std::string> vEmptyArray;          //vector of empty cells, eg. 0,1 is 0x, 1y
public:
    Grid(void);				//default constructor
    Grid(int, int);                     //Grid constructor, setting the array width and depth
    void RandomiseFood(void);           	//function to randomise position of food on empty cell

    bool isFoodPlaced(void);                // has food been placed?  TODO: unused for now
    void EatFood(void);                     //FoodEaten, will add a "by whom" later string EatFood(string WhoAteMe) return WhoAteMe?
    // if I make a render class, this should go there. TODO: move into UI class
    void RenderField(void);                     // display the grid in terminal.
};

/*----------------------END-------------------*/
#endif

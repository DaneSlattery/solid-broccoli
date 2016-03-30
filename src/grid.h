//grid.h

//include guard
#ifndef GRID_H
#define GRID_H

//included dependencies
#include <iostream> // cout
#include <vector> 	// vector
#include <stdlib.h> // srand and rand
#include <time.h> 	// time
#include "cell.h"	// cell definition

// the grid class is a 2D array of cells, with a variable size
// 0,0 is top left.
class Grid
{
private:
	int iWidth;				//width of playing field
	int iDepth;				//depth of playing field
	int iFoodX;
	int iFoodY;				//where the food is
	bool bFoodPlaced;		//is food placed?
	bool bFoodEaten;		//is food eaten?
	std::vector< std::vector <Cell> > v2CellArray; //2D vector for dynamic array
public:
	Grid();					//default constructor
	Grid(int, int); 		//Grid constructor, setting the array width and depth
	void RandomiseFood();	//function to randomise position of food on empty cell
	bool isFoodPlaced();	// has food been placed?  TODO: unused for now
	void EatFood();			//FoodEaten, will add a "by whom" later string EatFood(string WhoAteMe) return WhoAteMe?
	// if I make a render class, this should go there.
	void RenderField(); 	// display the grid in terminal.
};

/*----------------------END-------------------*/
#endif
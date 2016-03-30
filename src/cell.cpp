//cell.cpp
// the cell class defines 1 block in our grid
#include "cell.h"

using namespace std;

Cell::Cell() //default constructor
{
	iX = -1;
	iY = -1;
	bFood = false;
	// below is a debug call
//	cout << "Cell Default Constructor called, location " << iX << ", " << iY << ". Food? " << bFood << endl;
}

Cell::Cell(int cx, int cy) //init constructor
{
	iX = cx;
	iY = cy;
	bFood = false;
	// below is a useful debug call
//	cout << iX << "," << iY << " ";
}

void Cell::SetFood(bool fbFood)
{
	bFood = fbFood;
}

bool Cell::isFood()
{
	return bFood;
}
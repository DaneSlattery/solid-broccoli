//cell.cpp

//my header
#include "cell.h"

using namespace std;

Cell::Cell(void) //default constructor
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

bool Cell::isFood(void)	//tell this cell that it is food!
{
	return bFood;
}

/*----------------------END-------------------*/
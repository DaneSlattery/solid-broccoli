//grid.cpp

//my header
#include "grid.h"

using namespace std;

Grid::Grid(int cWidth, int cDepth) 	// init constructor
{
	iWidth = cWidth;
	iDepth = cDepth;

	for (int row = 0; row < iWidth; row++)
	{
		v2CellArray.push_back(std::vector<Cell>());
		for (int column = 0; column < iDepth; column++)
		{
			v2CellArray[row].push_back(Cell(column,row));
		}
	}
	// below is a debug call
	//cout << "Grid Constructor called, width = " << iWidth << ", depth = " << iDepth << "." << endl;
}

void Grid::RandomiseFood() 	//function to randomise position of food on empty cell
{
	//init. random seed
	srand(time(NULL));

	//generate random x and random y position and set the cell to have food
	iFoodX = rand() % (iWidth); // from 0 to iWidth-1 (array is 0 indexed)
	iFoodY = rand() % (iDepth); // from 0 to iDepth-1 

	v2CellArray[iFoodX][iFoodY].SetFood(true);
	//cout << "Food placed at: " << iFoodX << "; " << iFoodY << endl;
}

void Grid::EatFood() 		// eat the food at iFoodX and Y
{
	v2CellArray[iFoodX][iFoodY].SetFood(false);
}

void Grid::RenderField()	//render the field as below
/* 
	o o o o 
   	o o o o
   	o o o o
   	x o o o
*/
{
	for (int i = 0; i < iWidth; i++)
	{
		cout << endl;
		for (int j = 0; j < iDepth; j++)
		{
			 if (v2CellArray[i][j].isFood())
			 	cout << "x ";
			 else 
			 	cout << "o "; 
			
		}
	}
	cout << endl;
}

/*----------------------END-------------------*/
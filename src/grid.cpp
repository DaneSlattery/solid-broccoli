//grid.cpp
// the grid class is a 2D array of cells, with a variable size.
#include "grid.h"

using namespace std;

Grid::Grid(int cWidth, int cDepth) // init constructor
{
	iWidth = cWidth;
	iDepth = cDepth;

	cout << "Top Left is 0(width),0(depth)" << endl;

	for (int row = 0; row < iWidth; row++)
	{
		v2CellArray.push_back(std::vector<Cell>());
		cout << endl;
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
	iFoodX = rand() % (iWidth-1); // from 0 to iWidth-1 (array is 0 indexed)
	iFoodY = rand() % (iDepth-1); // from 0 to iDepth-1 

	v2CellArray[iFoodX][iFoodY].SetFood(true);
	cout << "Food placed at: " << iFoodX << "; " << iFoodY << endl;
}

void Grid::EatFood()
{
	v2CellArray[iFoodX][iFoodY].SetFood(false);
}

void Grid::RenderField()
{

	for (int i = 0; i < iWidth; i++)
	{
		cout << endl;
		for (int j = 0; j < iDepth; j++)
		{
			// if (v2CellArray[i][j].isFood())
			// 	cout << "@ ";
			// else 
			// 	cout << "_ "; 
			cout << v2CellArray.at(i).at(j).iX << "," << v2CellArray.at(i).at(j).iY << " ";
		}
	}
	cout << endl;
}
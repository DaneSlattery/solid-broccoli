//main.cpp
#include <iostream> //for cin, cout and getline
#include <string>	//for string manip
#include <sstream>	//for taking user input into vars other than string
#include <unistd.h>	// for sleep
#include "grid.h"	//refers to the 2D array class

using namespace std;



int main()
{
	//init vars
	int iGridWidth = 0, iGridDepth = 0;
	string input = "";
	//init
	cout << "Enter Grid Width: ";
	getline(cin, input);
	stringstream(input) >> iGridWidth;
	cout << "Enter Grid Depth: ";
	getline(cin, input);
	stringstream(input) >> iGridDepth;

	cout << "Grid Width = " << iGridWidth << " ;Grid Depth = " << iGridDepth << endl;
	Grid newGrid(iGridWidth,iGridDepth);

		newGrid.RandomiseFood();
		newGrid.RenderField();
		sleep(1);
		newGrid.EatFood();

	//init complete

	// for (int k = 0; k < 10; k++)
	// {
	// 	newGrid.RandomiseFood();
	// 	newGrid.RenderField();
	// 	sleep(1);
	// 	newGrid.EatFood();
	// }
	//game loop here
	while (true)
	{
		
		break;
	}

 	//cell.Debug();
    return 0;
}



//main.cpp

//included dependencies
#include <iostream>     //for cin, cout and getline
#include <string>	//for string manip
#include <sstream>	//for taking user input into vars other than string
#include <unistd.h>	// for sleep
#include "grid.h"	//refers to the 2D array class
#include "userinterface.h"  //the rendering and input capture

using namespace std;

//constants
const int MAX_GRID_SIZE = 99;

int main(void)
{
	//init vars
	int iGridWidth = 0, iGridDepth = 0;
	string input = "";
	//init
	//input capture
	while (true)
	{
		cout << "Enter Grid Width: ";
		getline(cin, input);
		stringstream(input) >> iGridWidth;
		cout << "Enter Grid Depth: ";
		getline(cin, input);
		stringstream(input) >> iGridDepth;
		//error handling 
		//(floating point exception in random number generator)
		if (iGridWidth <= 0)
		{
			cout << "Invalid Entry for Width." << endl;
		} 
		else if (iGridDepth <= 0)
		{
			cout << "Invalid Entry for Height." << endl;
		} 
		//fairly slow computer, don't want to hurt her. I'm sure you can change these
		else if (iGridWidth > MAX_GRID_SIZE)
		{
			cout << "Width is dangerously large." << endl;
		}
		else if (iGridDepth > MAX_GRID_SIZE)
		{
			cout << "Depth is dangerously large." << endl;
		}
		else 
			break; //all good
	}

	Grid myGrid(iGridWidth, iGridDepth);

	myGrid.RandomiseFood();
        
        cout << "Drawing GUI..." << endl;
        myGrid.RenderField();
        //InitGUI(iGridDepth, iGridWidth);
        
	cout << "Initialisation Complete." << endl;
	//init complete

	//game loop here
	while (true)
	{
		myGrid.EatFood();
        myGrid.RenderField();
        sleep(1);
		myGrid.RandomiseFood();
		myGrid.RenderField();
		sleep(1);
		//break;
	}
        //sleep(10);
        cout << "Ending the Program..." << endl;
        //EndGUI();
    return EXIT_SUCCESS;
}

/*----------------------END-------------------*/

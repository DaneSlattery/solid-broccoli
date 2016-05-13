//grid.cpp

//my header
#include "grid.h"

using namespace std;
#define EMPTY 0
#define FOOD 1
#define SNAKE 2 // the values to fill the cell status variable

Grid::Grid(int cWidth, int cDepth) 	// init constructor
{
    iWidth = cWidth;
    iDepth = cDepth;
    
	int iListCounter = 0;		//move to header

    cout << "Creating " << cWidth << "*" << cDepth << " grid..." << endl;
	
	//thanks rowan.
	v2CellArray = vector< vector< Cell > >(iWidth, vector<Cell>(iDepth));
	vEmptyArray.resize(iWidth * iDepth);			//make the empty array of strings big enough
    for (int row = 0; row < iWidth; row++)
    {
       // v2CellArray[row] = vector<Cell>(iDepth);
        for (int column = 0; column < iDepth; column++)
        {
            v2CellArray[row][column] = Cell();
            ostringstream ss;		//move to header
            ss << row << "," << column;
            cout << ss.str() << endl;
            vEmptyArray[iListCounter] = ss.str();
            iListCounter++;     
        }
    }
}

void Grid::RandomiseFood(void) 	//function to randomise position of food on empty cell
{
    cout << "Placing Food..." << endl;
    
    //init. random seed
    srand(time(NULL)); 
    if (vEmptyArray.size() != 0)
    {
        //generate random position in empty cells to assign the food to
        iRandValue = rand() % vEmptyArray.size();   // from 0 to number of empty cells
         
        stringstream s;				//move to header when ready
        s << vEmptyArray[iRandValue];
        
        s >> iFoodX;                                //extract the first integer
        s.ignore();                                 //ignore the comma
        s >> iFoodY;                                //extract second integer

        v2CellArray[iFoodX][iFoodY].SetStatus(FOOD);//set the cell to contain food
        vEmptyArray.erase(vEmptyArray.begin() + iRandValue);    //that cell is no longer empty!   
       
        cout << "Food placed at: " << iFoodX << "; " << iFoodY << endl;
    }
}

void Grid::EatFood(void) 		// eat the food at iFoodX and Y
{
    v2CellArray[iFoodX][iFoodY].SetStatus(SNAKE); // for the food to be eaten, there would have to be a snake there
    RandomiseFood();                              // place new food
}

void Grid::RenderField(void)	//render the field as below
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
                if (v2CellArray[i][j].GetStatus() == FOOD)
                    cout << "x ";
                else if (v2CellArray[i][j].GetStatus() == SNAKE)
                    cout << "# ";
                else
                    cout << "o "; 
            }
	}
	cout << endl;
}

/*----------------------END-------------------*/

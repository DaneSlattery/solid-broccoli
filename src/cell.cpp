//cell.cpp

//my header
#include "cell.h"

using namespace std;

Cell::Cell(void) //init constructor
{
    iStatus = 0;            //empty cell
}

void Cell::SetStatus(int fiStatus)
{
    iStatus = fiStatus;
}

int Cell::GetStatus(void)
{
    return iStatus;
}

/*----------------------END-------------------*/
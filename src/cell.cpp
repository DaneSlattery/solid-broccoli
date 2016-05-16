//cell.cpp

//my header
#include "cell.h"

using namespace std;

Cell::Cell(void) //init constructor
{
    m_iStatus = 0;            //empty cell
}

void Cell::SetStatus(int fiStatus)
{
    m_iStatus = fiStatus;
}

int Cell::GetStatus(void)
{
    return m_iStatus;
}

/*----------------------END-------------------*/
//cell.cpp
// the cell class defines 1 block in our grid
#include "cell.h"

using namespace std;

Cell::Cell()
{
	m_width = -1;
	m_depth = -1;
	m_food = false;
	cout << "Cell Default Constructor called, location " << m_width << ", " << m_depth << ". Food? " << m_food << endl;
}

Cell::Cell(int x, int y)
{
	m_width = x;
	m_depth = y;
	m_food = false;
	cout << "Cell Constructor called, location " << m_width << ", " << m_depth << ". Food? " << m_food << endl;
}
//grid.cpp
// the grid class is a 2D array of cells, with a variable size.
#include <iostream>
#include "grid.h"

using namespace std;

Grid::Grid(int width, int depth) 
{
	m_size_width = width;
	m_size_depth = depth;

	//m_cell_array.resize(m_size_width);
	//for (int i = 0; i < m_size_width; i++)
	//	m_cell_array[i].resize(m_size_depth);
	for (int row = 0; row < m_size_width; row++)
	{
		std::vector<Cell> newColumn;
		m_cell_array.push_back(newColumn);
		for (int column = 0; column < m_size_depth; column++)
		{
			m_cell_array.at(row).push_back(Cell(row,column));
		}
	}

	// for (int i = 0; i < m_size_width; i++)
	// {
	// 	for (int j = 0; j < m_size_depth; j++)
	// 	{
	// 		//m_cell_array(m_size_width, std::vector<Cell> (m_size_depth, Cell(i,j)));
	// 		m_cell_array[i][j] = Cell(i, j); // this is a static implementation
	// 	}
	// }
	cout << "Top Left is 0(width),0(depth)" << endl;
	
	cout << "Grid Constructor called, width = " << m_size_width << ", depth = " << m_size_depth << "." << endl;
}

void Grid::RandomiseFood()
{
	cout << "Food placed at: " << endl;
}
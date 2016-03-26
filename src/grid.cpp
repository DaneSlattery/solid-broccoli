//grid.cpp
// the grid class is a 2D array of cells, with a variable size.
#include<iostream>
#include"grid.h"

Grid::Grid(int width, int depth) : m_size_width(width), m_size_depth(depth)
{
	for (int i = 0, i < m_size_width, i++)
	{
		for (int j = 0, j < m_size_depth, j++)
		{
			Cell** 
		}
	}
	cout << "Grid Constructor called, width = " << m_size_width << ", depth = " << m_size_depth << "." << endl;
}
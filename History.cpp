#include "History.h"
#include "globals.h"
#include <iostream>

using namespace std;

History::History(int nRows, int nCols)
: m_dimrow(nRows), m_dimcol(nCols), m_player(false)
{
	for (int r = 0; r < nRows; r++)				//set m_grid[][] = 0 for all grid points
        for (int c = 0; c < nCols; c++)  
            m_grid[r][c] = 0;
}

History::~History()
{
}

bool History::record(int r, int c)		//r and c are new grid point locations
{										//m_prow and m_pcol contain previous grid point location
	if(r <= 0  ||  c <= 0  ||  r > MAXROWS  ||  c > MAXCOLS)
		return false;
	
	else if(!m_player)					//display '.' for initial player position
	{	
		m_player = true;
		return true;
	}
	
	else
	{
		//tally up number of turns player has stayed at each grid point
		//if current row and column is same as previous add 1 to it
		//if moved to m_grid[][] 1-8 times print as is
		//if more than 9, set m_grid[][] equal 9
 
		m_grid[r][c] += 1;
		if(m_grid[r][c] > 9)
			m_grid[r][c] = 9;
		return true;
	}
}
 
void History::display() const
{
	char dot = '.';
	int h_r, h_c;
	
	// Draw grid with dots or numbers
    clearScreen();
	cout << endl;
	for (h_r = 0; h_r < m_dimrow; h_r++) 
	{
        for (h_c = 0; h_c < m_dimcol; h_c++)  
            if(m_grid[h_r+1][h_c+1] == 0)
				cout << dot;
			else
				cout << m_grid[h_r+1][h_c+1];
		cout << endl;
	}
	cout << endl;
}

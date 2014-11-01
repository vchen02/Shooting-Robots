#ifndef HISTORY_H
#define HISTORY_H
#include "globals.h"

class History
{
public:
	History(int nRows, int nCols);
	~History();
	bool record(int r, int c);
	void display() const;

private:  
    int     m_dimrow;  
    int     m_dimcol;
	bool	m_player;
	int		m_grid[MAXROWS][MAXCOLS];
};

#endif		//HISTORY_H
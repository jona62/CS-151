//Team: JO-EL
//Author: Jonathan James
//Creation: 10-30-17
#ifndef VERTICALWINNER_H
#define VERTICALWINNER_H

#include "Archive.h"

bool verticalWinner( )
{
	if (( grid[3]==grid[0] && grid[3]== grid[6] && grid[0] == grid[6]) && (grid[0] != '-') && ( grid[3] != '-') && ( grid[6] != '-')){
		return true;
	}
	else if (( grid[4] == grid[1] && grid[4] == grid[7] && grid[1] == grid[7]) && ( grid[1] != '-') && ( grid[4] != '-') && ( grid[7] != '-')){
		return true;
	}
	else if (( grid[5] == grid[2] && grid[5] == grid[8] && grid[2] == grid[8]) && ( grid[2] != '-') && ( grid[5] != '-') && ( grid[8] != '-')){
			return true;
		}
	return false;
}

#endif

//Team: JO-EL
//Author: Jonathan James
//Creation: 10-30-17
#ifndef BOARD_H
#define BOARD_H

#include "Archive.h"

std::string board()
{
	std::string result = "\n";
	result += grid[0];
	result += " ";
	result += grid[1];
	result += " ";
	result += grid[2];
	result += "\n";
	result += grid[3];
	result += " ";
	result += grid[4];
	result += " ";
	result += grid[5];
	result += "\n";
	result += grid[6];
	result += " ";
	result += grid[7];
	result += " ";
	result += grid[8];
	result += "\n";
	return result;
}

#endif

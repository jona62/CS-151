//Team: JO-EL
//Members: Jonathan James
//Creation: 10/16/17
#ifndef MEAN_H
#define MEAN_H

#include "Archive.h"

double mean(double x, double y, double z, double w, double v)
{
	double av = (x + y + z + w + v) / 5;
	return av;
}

#endif

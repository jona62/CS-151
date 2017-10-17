//Team: JO-EL
//Author: Elvis Rodriguez
//Creation: 10/16/17
#ifndef VARIANCE_H
#define VARIANCE_H

#include "Archive.h"

double variance(double x, double y, double z, double w, double v)
{
	double mu, result;
	mu = mean(x, y, z, w, v);
	x = x - mu;
	x = x * x;
	y = y - mu;
	y = y * y;
	z = z - mu;
	z = z * z;
	w = w - mu;
	w = w * w;
	v = v - mu;
	v = v * v;

	result = mean(x, y, z, w, v);
	return result;
}

#endif

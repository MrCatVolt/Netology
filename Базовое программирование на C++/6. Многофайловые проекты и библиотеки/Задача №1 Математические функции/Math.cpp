#include "Math.h"

int sum(int x, int y) {
	return (x + y);
}

int sub(int x, int y) {
	return (x - y);
}

int mul(int x, int y) {
	return (x * y);
}

/*int divoyd(int x, int y) {
	int c = x / y;
	return c;
}
*/
double divoyd(int x, int y) {
	double c = static_cast<double>(x);
	double d = static_cast<double>(y);

	double e = c/d;
		return e;
}

int expo(int x, int y) {

	int i=1, c = x;
	while (i < y) {
		c *= x;
		i++;
	}

	return c;
}


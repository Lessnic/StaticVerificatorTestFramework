//Classification: p/ZD/aS+dA/A(D(v,c),v)/rc/cd+rp
//Written by: Igor Eremeev

#include <malloc.h>

int recursion(int p) {
	if (p > 5) {
		return (p);
	}
	p++;
	return (recursion(p));
}

int main(void) {
	int *p;
	int a = -2;
	int b;
	
	p = (int *)malloc(sizeof(int) * 3);
	p[2] = 4;
	
	if (a < -3) {
		a = recursion (a);
	}
	
	while (p[2] < 5) {
		p[2]++;
		b = 1 / (a - p[2]);
	}
	
	return 0;
}

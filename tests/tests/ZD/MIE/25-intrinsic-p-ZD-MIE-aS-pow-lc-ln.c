//Classification: #intrinsic/p/ZD/MIE/aS/pow/lc/ln
//Written by: Sergey Pomelov
//Reviewed by: Igor Eremeev
//Comment:x

#include <math.h>
#include <stdio.h>

int main(void) {
	double a;
	double b;
	a = pow(1,-1.7E+308);
    b = 1 / a;
	printf("%f",b);
	return 0;
}

//Classification: #default/p/BO/PAE/aA+aS/D(v)/fpb/rp
//Written by: Igor Eremeev
//Reviewed by: Pomelov Sergey
//Comment:  buffer overrun using pointer arithmetic

#include <stdlib.h>
#include <stdio.h>

int func(int i, int **p) 
{
	(**p) = i;
	(*p)++;
	return 0;
}


int main (void)
{
	int *p, A[50], i;
	p = A;

	for (i = 0; i<50; i++) {
		func(i, &p);
	}
	
	p--;
	(*p) = 1024;
	
	printf ("%d", A[0] + *p);
	return 0;
}

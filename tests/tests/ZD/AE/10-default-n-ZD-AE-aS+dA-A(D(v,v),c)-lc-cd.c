//Classification: #default/n/ZD/AE/aS+dA/A(D(v,v),c)/lc/cd
//Written by: Igor Eremeev
//Reviewed by: Sergey Pomelov

#include <malloc.h>
#include <stdio.h>

int main(void) {
	int a = 1;
	int b;

	int *p;
	p = (int *)malloc(sizeof(int) * 3);
	if (p == 0) {
		return 1;
	}
	p[1] = 6;
	p[2] = 5;
	
	if (a == 1) {
		b = 1 / (p[a]-6);
		printf ("%d", b);
	}

	free(p);
	return 0;
}

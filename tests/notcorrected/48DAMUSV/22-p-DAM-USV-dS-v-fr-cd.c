//Classification: p/DAM/USV/dS/v/fr/cd
//Written by: Sergey Pomelov
//Reviewed by:
//Comment:

#include <stdio.h>
#include <malloc.h>

int *func(void) {
int* q;if ((q=(int*)malloc(sizeof(int)))==NULL) 
{printf("malloc error"); 
return NULL;
}
else {return q;}
}

int main(void) {
int c = 1;
int* p = &c;
if (c==1) if (p!=NULL)
 {p = func();
*p = 1;
free(p);}
printf("%d",c);
return 0;
}

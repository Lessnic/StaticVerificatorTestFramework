//Classification: #default/n/DAM/NP/sS/D(v)/fp/ln
//Written by: Sergey Pomelov
//Reviewed by: Igor Eremeev
//Comment:

#include <stdio.h>

int *func(int *q) 
{
int *p = q;
return p;
};

int main(void) 
{
static int a;
a = *func(NULL);
printf("%d",a);
return 0;
}
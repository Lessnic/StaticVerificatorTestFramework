//Classification: n/DAM/NP/gS/D(v)/fp/rp+cd
//Written by: Sergey Pomelov
//Reviewed by: Igor Eremeev
//Comment:

#include <stdio.h>

int *func(int *p) 
{
return p;
};

int a;

int main(void) 
{
int c;
int i;
scanf("%d",&c);
for(i=1; i<100; i++) {
  if (c==i) 
	a = *func(NULL);
}
printf("%d %d",a,c);
return 0;
}

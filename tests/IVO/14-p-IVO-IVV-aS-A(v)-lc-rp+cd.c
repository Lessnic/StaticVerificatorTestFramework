//Classification: p/IVO/IVV/aS/A(v)/lc/rp+cd
//Written by: Sergey Pomelov
//Reviewed by:
//Comment: b<1e3. many false-positives(tru 1e7 b=999999)

#include <stdio.h>

int main(void) 
{
	int a;
	int b;
	int i;
	scanf("%d",&b);
	for(i=1;i<32;i++) { 
		if (((b*b+1)<0) && (b<1e3) && (b>-1e3)) {
				printf("%d ",a);		
		} else {
			a = b+i;
			printf("%d ",a);
		}
	}
	return 0;
}

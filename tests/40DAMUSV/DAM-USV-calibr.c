//Classification: n/DAM/USV/dS/v/lc/ln
//Written by: Pomelov Sergey
//Reviewed by: Eremeev Igor
//Comment:int* p=new int;delete p;*p=5; ������! p, ���������� ����� ����������� ����������, ��� ��������� �� ������, ���������� ������� ����������. 

#include <stdio.h>
#include <malloc.h>

int main(void) 
{
	int c = 1;
	int *p;
	p = (int*)malloc(sizeof(int));
	if (p==NULL) {
		printf("malloc error");
		return 1;
	}
	free(p);
	*p = 1;
	printf("%d %d",c,*p);
return 0;
}

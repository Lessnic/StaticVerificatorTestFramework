//Classification: #intrinsic/n/IVO/STR/dA/strcat/fpb/rp
//Written by: Igor Eremeev
//Reviewed by: Sergey Pomelov
//Comment:  using not terminated string

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int func(char *str1) {
	int i;
	
	for (i=0; i<=10; i++) {
		str1[i]='a'+i;
	}
	
	return 0;
}

int main(void)
{
	char *str1, str2[100];
	str2[0]='\0';
	str1 = (char*)malloc(sizeof(char[50]));
	if (str1 == 0) {
		return 1;
	}

	func(str1);
	
	strcat(str2, str1);

	printf("%s", str2);
	
	free(str1);
	return 0;
}

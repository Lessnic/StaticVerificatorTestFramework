//Classification: #default/p/ZD/AE/aS+dS/D(v)/lc/rp
//Written by: Alexey Salmin
//Reviewed by: Igor Eremeev

int main(void) {
	int a = 11;
	int *p = &a;
	int i;
	for (i = 0; i < 10; i++)
		*p--;
	return 1 / *p;
}

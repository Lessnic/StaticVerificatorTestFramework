//Classification: #default/p/ZD/AE/aA/D(A(v, c))/fpb/rp
//Written by: Alexey Salmin
//Reviewed by: Igor Eremeev

void f(int a[]) {
	int i;
	for (i = 0; i < 10; i++)
		a[i] = 9 - i;
}

int main(int argc, char *argv[]) {
	int a[10];
	int i, c;
	f(a);
	c = 1 / a[0];
	return c;
}

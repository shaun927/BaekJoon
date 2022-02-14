#include<stdio.h>	

int main() {
	int n = 0;	int add = 0;
	char a[100] = { 0, };

	scanf_s("%d", &n);

	scanf_s("%s", a, sizeof(a));

	for (int i = 0; i < n; i++) {
		add += a[i] - '0';

	}

	printf("%d\n", add);

	return 0;
}
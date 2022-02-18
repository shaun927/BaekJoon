#include<stdio.h>
int sum(int n) {
	int d[20] = { 0, };
	int k = 2;
	d[1] = 1;
	if (n == 0) { return 0; }
	if (n == 1) { return 1; }

	return d[k] = sum(n - 1) + sum(n - 2);
}



int main(int n) {
	int a = 0;
	scanf_s("%d", &n);
	printf("%d", sum(n));

}
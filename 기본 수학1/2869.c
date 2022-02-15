#include<stdio.h>

int main() {
	int a = 0, b = 0, v = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &v);
	int sum = 0, count = 0;

	if ((v - a) % (a - b) == 0) {
		count = (v - a) / (a - b);
		printf("%d", count + 1);

	}
	else if ((v - a) % (a - b) != 0) {
		count = (v - a) / (a - b);
		printf("%d", count + 2);
	}
}
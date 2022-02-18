#include<stdio.h>

int main() {
	int t = 0;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++) {
		int num = 0;
		int h = 0;
		int w = 0;
		int n = 0;
		scanf_s("%d", &h);
		scanf_s("%d", &w);
		scanf_s("%d", &n);
		if (n % h == 0) {
			num = h * 100 + n / h;
			printf("%d\n", num);
		}
		else {
			num = (n % h) * 100 + (n / h) + 1;
			printf("%d\n", num);
		}

	}
	return 0;
}
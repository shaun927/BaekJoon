#include<stdio.h>

int main() {
	int n = 0;
	scanf_s("%d", &n);
	int a = 0, b = 0;
	if ((n % 5) == 0)
	{
		printf("%d", (n / 5)); return 0;
	}
	for (int i = (n / 5); i >= 0; i--) {
		int sum = 0;
		if ((n - (5 * i)) % 3 == 0) {
			sum = i + ((n - (5 * i)) / 3);
			printf("%d", sum);
			break;

		}
		if (i == 0 && (n - (5 * i)) % 3 != 0) {
			printf("-1");
		}
	}
	return 0;
}
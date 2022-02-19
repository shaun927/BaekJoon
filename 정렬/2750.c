#include<stdio.h>

int main() {
	int n = 0, index = 0, temp = 0;
	int a[1001] = { 0, };
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {
		int min = 1001;
		for (int j = i; j < n; j++) {
			if (min > a[j]) {
				min = a[j];
				index = j;
			}


		}
		temp = a[index];
		a[index] = a[i];
		a[i] = temp;

	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
}
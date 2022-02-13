#include<stdio.h>

int main() {
	int n = 0; int num = 0;
	int d[10010] = { 0, };
	scanf_s("%d", &n);
	int a = 0, b = 0, c = 0;
	for (int i = 0; i <= n; i++) {
		if (i > 0 && i < 100) num++;//머리로 판단가능한 것은 그냥 해도된다
		else if (i >= 100 && i < 1000) {
			c = i % 10;
			b = (i / 10) % 10;
			a = ((i / 10) / 10) % 10;
			if ((a - b) == (b - c)) {
				num++;
			}
		}
		else if (i == 1000)break;
	}printf("%d", num);
}
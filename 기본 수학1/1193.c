#include<stdio.h>

int main() {
	int x = 0;
	scanf_s("%d", &x);
	if (x == 1) {
		printf("1/1");
		return 0;
	}
	int i = 2, j = 1; int k = 0, num = 0;
	while (1) {
		if (i <= x && i + j >= x) {
			k = j + 2;//분자 분모 합
			num = x - i + 1;// 위/아래에서 몇 번째인지
			break;
		}
		i = i + j + 1;
		j += 1;
	}

	if (k % 2 == 0) {
		printf("%d/%d", k - num, num);
	}
	else
		printf("%d/%d", num, k - num);
}
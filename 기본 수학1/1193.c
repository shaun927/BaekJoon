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
			k = j + 2;//���� �и� ��
			num = x - i + 1;// ��/�Ʒ����� �� ��°����
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
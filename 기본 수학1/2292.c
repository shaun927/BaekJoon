#include<stdio.h>
int main() {
	int n = 0; int i = 2, j = 5;//j�� ���̰�
	scanf_s("%d", &n);
	int count = 2;
	while (1) {
		if (n == 1) {
			printf("1");
			return 0;;
		}
		else if (i <= n && i + j >= n) {

			printf("%d", count);
			break;
		}
		i = j + i + 1;
		j += 6; count++;
	}
}

//�迭�� ���������� ����!!�ٸ� ����� �ִ�
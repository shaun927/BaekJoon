#include<stdio.h>


int main() {
	int arr[20000] = { 0, };//�迭�� ũ�⸦ �̸� �� ������

	for (int i = 1; i < 10000; i++) {
		int t = i;
		int add = 0;

		while (t > 0) {
			add += t % 10;
			t = t / 10;
			if (t == 0)break;
		}
		arr[add + i] = add + i;

	}

	for (int j = 1; j < 10000; j++) {
		if (arr[j] == 0) {
			printf("%d\n", j);
		}
	}
}
//��� ���� ���� ������ ������ ���� �Ұ�
//�ٸ� ��� �����غ���-->��� �� �������� ����
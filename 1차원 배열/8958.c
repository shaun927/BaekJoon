#include <stdio.h>

int main() {
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		char str[80];//���� �迭�� char�� �����Ұ�
		scanf_s("%s", str, sizeof(str));//�迭 ���� &�Ⱦ��� ũ�⼱��
		int j = 0; int sum = 0; int count = 0;//���� ���� ��ġ ����
		while (str[j] != '\0') {//���� ������ '\0'�� �ִٴ� �� ���
			//���⿡ count�� �����ϸ� count�� ��� 0���� �ʱ�ȭ�ȴ�

			if (str[j] == 'O') {
				count++;
				sum += count;
			}
			else if (str[j] == 'X') {
				count = 0;
			}

			j++;

		}
		printf("%d\n", sum);
	}

}
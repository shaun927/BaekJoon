#include<stdio.h>

int main() {
	char s[100] = { 0, };//�ڷ��� ���� ������ �߸��ؼ� ���� ã���� �����ɸ�
	int arr[30] = { 0, };
	scanf_s("%s", s, sizeof(s));//���ڿ� �޸��� �ڷ��� ���� ������ ��

	for (int i = 'a'; i < 'z' + 1; i++) {
		for (int j = 0; j < 100; j++) {
			if (s[j] == i) {
				arr[i - 'a'] = j;
				break;
			}
			else arr[i - 'a'] = -1;

		}
	}
	for (int k = 0; k < 26; k++) {
		printf("%d ", arr[k]);
	}
	//���� Ǫ�� ��Ŀ� �ƽ�Ű�ڵ尪 ����ϴ� ����� ������ �˾ƵѰ�
}
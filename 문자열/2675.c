#include<stdio.h>
#include<string.h>
int main() {
	int t = 0;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++) {
		int r = 0;
		scanf_s("%d", &r);
		char s[30] = { 0, };
		scanf_s("%s", s, sizeof(s));
		for (int j = 0; j < strlen(s); j++) {//���ڿ�ũ�⸦ �� ������?-->�� ���߸� �������� �ƽ�Ű�ڵ尪 0�� ���ڷ� ���==null
			for (int k = 0; k < r; k++) {
				printf("%c", s[j]);//�ڷ����� %c�� �ٲپ����� ������-->�����ϳ� ����
			}//�� %s�� �ȵɱ�>?
		}

	}
	return 0;
}
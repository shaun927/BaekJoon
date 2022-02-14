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
		for (int j = 0; j < strlen(s); j++) {//문자열크기를 왜 딱맞춰?-->안 맞추면 나머지를 아스키코드값 0을 문자로 출력==null
			for (int k = 0; k < r; k++) {
				printf("%c", s[j]);//자료형을 %c로 바꾸었을때 성공함-->문자하나 받음
			}//왜 %s가 안될까>?
		}

	}
	return 0;
}
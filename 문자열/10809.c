#include<stdio.h>

int main() {
	char s[100] = { 0, };//자료형 종류 선언을 잘못해서 오류 찾느라 오래걸림
	int arr[30] = { 0, };
	scanf_s("%s", s, sizeof(s));//문자열 받를때 자료형 선언 조심할 것

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
	//문제 푸는 방식에 아스키코드값 사용하는 방법도 있으니 알아둘것
}
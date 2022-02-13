#include <stdio.h>

int main() {
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		char str[80];//문자 배열은 char로 선언할것
		scanf_s("%s", str, sizeof(str));//배열 사용시 &안쓰고 크기선언
		int j = 0; int sum = 0; int count = 0;//변수 선언 위치 주의
		while (str[j] != '\0') {//문장 끝날때 '\0'이 있다는 거 기억
			//여기에 count를 선언하면 count가 계속 0으로 초기화된다

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
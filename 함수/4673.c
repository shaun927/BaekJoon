#include<stdio.h>


int main() {
	int arr[20000] = { 0, };//배열의 크기를 미리 알 수없음

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
//출력 값이 작은 순으로 나올지 예측 불가
//다른 방법 생각해볼것-->결과 값 기준으로 생각
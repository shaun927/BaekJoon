#include<stdio.h>
int main() {
	int c = 0;
	scanf("%d", &c);
	
	for (int i = 0; i < c; i++) {
		int sum = 0,score=0,add=0,n=0;
		int arr[1000] = { 0, };
		double average = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d", &score);
			arr[j] = score;
			sum += score;

		}
		average = sum / n;
		for (int k = 0; k <n ; k++) {
			if (arr[k] > average) {
				add++;
			}
		}
		printf("%0.3f%%\n", (float)add / n * 100);
		
		
	}
}
//전역변수랑 지역변수 구분 주의하자
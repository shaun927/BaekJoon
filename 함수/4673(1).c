#include<stdio.h>


int a(int t) {
	int add = t;
	while (t > 0) {
		add += t % 10;
		t = t / 10;
		if (t == 0)break;
	}
	return add;
}

int main() {
	int arr[10001] = { 0, };
	int result = 0;
	for (int i = 0; i < 10001; i++) {

		result = a(i);
		if (result < 10001) {
			arr[result] = 1;
		}

	}
	for (int j = 0; j < 10001; j++) {
		if (arr[j] != 1) {
			printf("%d\n", j);
		}
	}
}
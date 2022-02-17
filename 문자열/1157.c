#include<stdio.h>

int main() {
	char c[1000000] = { 0, };
	char arr[27] = { 0, };
	int  count[27] = { 0, };
	scanf_s("%s", c, sizeof(c));
	for (int i = 65; i < 91; i++) {

		arr[i - 65] = i;
	}//'z'이거는 z의 아스키 코드값이 나온다 65-->'a'
	for (int i = 0; i < 26; i++) {

		for (int j = 0; j < sizeof(c); j++) {

			if (arr[i] == c[j] || arr[i] == c[j] - 32) {
				count[i]++;
			}


		}


	}
	int max = count[0], t = 0;
	for (int i = 0; i < 26; i++) {
		if (max < count[i]) {
			max = count[i];
			t = i;

		}
	}for (int j = 0; j < 26; j++)
		if (count[t] == count[j] && t != j) {
			printf("?");
			return 0;
		}
	printf("%c", arr[t]);
	return 0;
}

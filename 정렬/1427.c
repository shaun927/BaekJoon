#include<stdio.h>
#include<string.h>
int main() {
	char arr[11] = { 0, };
	scanf_s("%s", arr, sizeof(arr));
	int  index = 0, temp = 0;
	for (int i = 0; i < strlen(arr); i++) {
		int max = 0;
		for (int j = i; j < strlen(arr); j++) {
			if (max <= arr[j]) {
				max = arr[j];
				index = j;
			}

		}
		temp = arr[index];
		arr[index] = arr[i];
		arr[i] = temp;

	}
	for (int i = 0; i < strlen(arr); i++) {
		printf("%c", arr[i]);
	}


}
#include<stdio.h>
#include<string.h>

int main() {
	char arr[101] = { 0, };
	scanf_s("%s", arr, sizeof(arr));
	int count = 0;
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == 'c' && arr[i + 1] == '=') {
			count++; i++;
		}
		else if (arr[i] == 'c' && arr[i + 1] == '-') {
			count++; i++;
		}
		else if (arr[i] == 'd' && arr[i + 1] == 'z' && arr[i + 2] == '=') {
			count++; i++; i++;
		}
		else if (arr[i] == 'd' && arr[i + 1] == '-') {
			count++; i++;
		}
		else if (arr[i] == 'l' && arr[i + 1] == 'j') {
			count++;
			i++;
		}
		else if (arr[i] == 'n' && arr[i + 1] == 'j') {
			count++; i++;
		}
		else if (arr[i] == 's' && arr[i + 1] == '=') {
			count++; i++;
		}
		else if (arr[i] == 'z' && arr[i + 1] == '=') {
			count++; i++;
		}
		else count++;





	}
	printf("%d", count);



}
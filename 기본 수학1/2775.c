int main() {

	int t = 0;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++) {
		int a = 0;
		int b = 0;
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		int arr[15][15] = { 0, };
		for (int i = 0; i < 15; i++) {
			arr[0][i] = i + 1;
			arr[i][0] = 1;
		}
		if (a == 0) {
			printf("%d", b);
			return 0;
		}
		for (int j = 1; j < 15; j++) {
			for (int i = 1; i < 15; i++) {
				arr[j][i] = arr[j - 1][i] + arr[j][i - 1];
			}

		}
		printf("%d\n", arr[a][b - 1]);


	}

}//2���� �迭 ó�� ���ͼ� ��������
//�ִ��� for���� ���� ����ϴ°��� ����. �ð� �����ɸ�


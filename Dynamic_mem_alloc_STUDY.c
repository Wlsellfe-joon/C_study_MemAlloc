#include <stdio.h>
#include <stdlib.h>

void main(int argc, char** argv) {
	int x, y;
	int** arr;

	printf("arr[x][y]�� ���� x �Է�: ");
	scanf("%d", &x);
	printf("arr[x][y]�� ���� y �Է�: ");
	scanf("%d", &y);

	// Memory alloc
	arr = (int**)malloc(sizeof(int*) * x); // int* �� ���Ҹ� x�� ������ 1���� �迭 ����

	for (int i = 0; i < x; i++) {
		arr[i] = (int*)malloc(sizeof(int) * y);
	}

	printf("2D �迭 ���� �Ϸ�!\n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			arr[y*i+j] = y*i+j;
			printf("%d ", arr[y * i + j]);
		}
	}
	for (int i = 0; i < x; i++)
		free(arr[i]);

	free(arr);
	return 0;
}
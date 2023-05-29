#include <stdio.h>
#include <stdlib.h>

void main(int argc, char** argv) {
	int x, y;
	int** arr;

	printf("arr[x][y]를 위한 x 입력: ");
	scanf("%d", &x);
	printf("arr[x][y]를 위한 y 입력: ");
	scanf("%d", &y);

	// Memory alloc
	arr = (int**)malloc(sizeof(int*) * x); // int* 형 원소를 x개 가지는 1차원 배열 생성

	for (int i = 0; i < x; i++) {
		arr[i] = (int*)malloc(sizeof(int) * y);
	}

	printf("2D 배열 생성 완료!\n");
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
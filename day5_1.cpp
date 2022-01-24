#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {

	//[중복요소 제거]
	int arr[10];
	int size = sizeof(arr) / sizeof(arr[0]);
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		int check;
		do {
			check = 0; // OFF.false 상태
			arr[i] = rand() % 10 + 1;

			for (int j = 0; j < i ; j++) { // i를 포함하지 않는선까지 (미만)
				if (arr[i] == arr[j]) {
					check = 1; // on.true
					break;
				}
			}


		} while (check);/*중복 되었다면*/
	}

	printf("[");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");


	// [정렬]
	// : 버블정렬(거품정렬)
	for (int a = 0; a < size; a++) {
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) { // 오름차순 정렬이 아니라면,
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}

	printf("[");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");

	// " 검색 " --> 이진탐색, 이분검색  을 위해서 "정렬된 데이터" 필요


	int arry[5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		int check;
		do {
			check = 0; // OFF.false 상태
			arry[i] = rand() % 10 + 1;

			for (int j = 0; j < i; j++) { // i를 포함하지 않는선까지 (미만)
				if (arry[i] == arry[j]) {
					check = 1; // on.true
					break;
				}
			}


		} while (check);/*중복 되었다면*/
	}

	printf("[");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arry[i]);
	}
	printf("]\n");

	for (int i = 0; i < 5; i++) {
		for (int i = 0; i < 4; i++) {
			if (arry[i] < arry[i + 1]) {
				int tmp = arry[i];
				arry[i] = arry[i + 1];
				arry[i + 1] = tmp;
			}
		}
	}

	printf("[");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arry[i]);
	}
	printf("]\n");




}
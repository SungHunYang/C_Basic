#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {

	//[�ߺ���� ����]
	int arr[10];
	int size = sizeof(arr) / sizeof(arr[0]);
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		int check;
		do {
			check = 0; // OFF.false ����
			arr[i] = rand() % 10 + 1;

			for (int j = 0; j < i ; j++) { // i�� �������� �ʴ¼����� (�̸�)
				if (arr[i] == arr[j]) {
					check = 1; // on.true
					break;
				}
			}


		} while (check);/*�ߺ� �Ǿ��ٸ�*/
	}

	printf("[");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");


	// [����]
	// : ��������(��ǰ����)
	for (int a = 0; a < size; a++) {
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) { // �������� ������ �ƴ϶��,
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

	// " �˻� " --> ����Ž��, �̺а˻�  �� ���ؼ� "���ĵ� ������" �ʿ�


	int arry[5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		int check;
		do {
			check = 0; // OFF.false ����
			arry[i] = rand() % 10 + 1;

			for (int j = 0; j < i; j++) { // i�� �������� �ʴ¼����� (�̸�)
				if (arry[i] == arry[j]) {
					check = 1; // on.true
					break;
				}
			}


		} while (check);/*�ߺ� �Ǿ��ٸ�*/
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
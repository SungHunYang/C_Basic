#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {

//[�˻�,Ž��-2]
// ����Ž��, �̺а˻�, binary search
	int arry[5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		int check;
		do {
			check = 0;
			arry[i] = rand() % 10 + 1;

			for (int j = 0; j < i; j++) { 
				if (arry[i] == arry[j]) {
					check = 1; 
					break;
				}
			}


		} while (check);
	}

	printf("[");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arry[i]);
	}
	printf("]\n");

	for (int i = 0; i < 5; i++) {
		for (int i = 0; i < 4; i++) {
			if (arry[i] > arry[i + 1]) {
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

	//[�˻�,Ž��-2]
// ����Ž��, �̺а˻�, binary search
	int num;
	printf("ã�� ������ �Է� : ");
	scanf("%d", &num);

	int start = 0; //-- > ����� ã������ ���� �κ�
	int end = 4; //-- > ����� ã������ �� �κ�
	while (start<=end) {
		int mid = (start + end) / 2;
		
		if (arry[mid] == num) {
			printf("%d�� ã�ҽ��ϴ� ! [%d]\n", num, mid);
			break;
		}
		else if (arry[mid] > num) {
			printf("DOWN\n");
			end = mid - 1;
		}
		else if (arry[mid] < num) {
			printf("Up\n");
			start = mid + 1;
		}
		
	}
	if (start>end) {
		printf("%d��(��) �������� �ʽ��ϴ�!\n", num);
	}
}

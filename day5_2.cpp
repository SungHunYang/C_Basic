#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {

//[검색,탐색-2]
// 이진탐색, 이분검색, binary search
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

	//[검색,탐색-2]
// 이진탐색, 이분검색, binary search
	int num;
	printf("찾을 데이터 입력 : ");
	scanf("%d", &num);

	int start = 0; //-- > 가운데를 찾기위해 시작 부분
	int end = 4; //-- > 가운데를 찾기위해 끝 부분
	while (start<=end) {
		int mid = (start + end) / 2;
		
		if (arry[mid] == num) {
			printf("%d를 찾았습니다 ! [%d]\n", num, mid);
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
		printf("%d는(은) 존재하지 않습니다!\n", num);
	}
}

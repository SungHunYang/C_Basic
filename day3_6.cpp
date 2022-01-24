#include<stdio.h>
void main() {

	//[반복문]

	//while : 특정조건을 만족할때까지 계속 진행
	int i = 1;
	while (/*조건식*/i<=3) {
		//수행문;
		printf("안녕하세요\n");
		i++;

	}
	printf("최종 i= %d \n\n", i);
	
	int num;
	printf("정수입력 : ");
	scanf("%d", &num);
	i = 1;
	while (i <= num) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	printf("최종 i= %d \n", i);


	int a;
	printf("정수입력 : ");
	scanf("%d", &a);
	i = 1;
	int cnt = 0;
	int hap =0;
	printf("[");
	while (i <= a) {
		if (i % 2 == 1) {
			printf("%d ", i);
			cnt++;
			hap += i;
		}
		i++;
	}
	printf("]\n홀수의 개수 %d : 합 %d ", cnt, hap);
}
#include<stdio.h>
void main() {

	//[제어문]

	//조건문 vs 반복문

	//if ,switch : 분기점, 어떤 코드를 특정한 상황에서만 수행할 경우

	//while for : 어떤 코드를 반복적으로 수행할 경우

	//[if문]
	if (/*조건식*/10 > 5) {
		//T이라면, {}블록구간을 수행
		// 조건식이 '1'이면 항상 실행 '0'이면 실행x
		printf("확인1\n");
	}printf("확인2\n");

	int n1, n2;
	printf("정수 2개 입력: ");
	scanf("%d%d", &n1, &n2);
	if (n1 > n2) {
		printf("%d가 %d보다 큽니다.\n", n1, n2);
	}
	else { // 양자택일
		printf("%d가 %d보다 큽니다.\n", n2, n1);
	}

	//예제 정수입력: -- 짝수면 짝수입니다 홀수면 홀수이비다
	int i;
	printf("정수 입력: ");
	scanf("%d", &i);
	if (i % 2 == 0) {
		printf("입력하신 %d는 '짝수' 입니다",i);
	}
	else if (i % 2 == 1) {
		printf("입력하신 %d는 '홀수' 입니다",i);
	}

}
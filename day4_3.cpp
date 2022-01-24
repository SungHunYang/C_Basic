#include<stdio.h>
void main() {
	// continue
	/*
	int i = 0;
	while (1) {
		if (i % 2) { // 홀수는 출력하지 않겠습니다. 홀수는 나머지가 '1'이여서 조건문이 자동 ture가 됨
			i++;
			continue; // "즉시" 반복문의 처음으로(while문의 경우, 조건식으로) 이동
		}
		printf("i=%d\n", i);
		if (i == 100) {
			break;
		}
		i++;
	}
	*/
	double i;
	while (1) {
		printf("\n실수 입력 : ");
		scanf("%lf", &i);
		if (i < 0) {
			continue;
		}
		if (i == 0) {
			printf("종료");
			break;
		}
		printf("%.3lf이 입력됨", i);
	}

}
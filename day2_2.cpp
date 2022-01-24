#include<stdio.h>
void main() {
	// [연산자]

	// 산술연산자
	int a = 10, b=3;
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b); // INT,나누기,몫 연산자
	printf("%d %% %d = %d\n", a, b, a % b); // MOD,나머지 연산자


	int score1, score2;
	printf("중간고사성적:");
	scanf("%d", &score1);
	printf("기말고사성적:");
	scanf("%d", &score2);
	int sum = score1 + score2;
	double avg = sum / 2.0; // 또하나의 방법 *1.0
	printf("총점 : %d점, 평균 : %.2lf점입니다.\n", sum, avg);


}
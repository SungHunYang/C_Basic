#include<stdio.h>
void main() {
	//삼항연산자== 조건연산자
	// 조건식 ? T:F 

	int num = 10 > 5 ? 100 : 200;
	printf("num= %d\n", num);

	//예제1 정수(점수)를 1개 입력 50이하면 f 51이상 Pass

	printf("점수를 입력 :");
	int a;
	scanf("%d", &a);
	char grade = a > 50 ? 'P' : 'F';
	printf("당신의 학점은 %c\n", grade); 
	// 여기서 버퍼를 생각할수도 있는데 
	// scanf와 printf 여서 문제 없음 scanf scanf 일때 enter 버퍼 문제 생김 
	
	//예제2 실수 3개 가장 작은 실수 출력
	
	double num1, num2, num3;
	/*
	printf("실수 3개 입력 :");
	scanf("%lf%lf%lf",&a,&b,&c); --> 한번에 넣기 cmd에서 입력할때 띄어쓰기로 3개 입력 
	*/
	printf("실수1 입력 :");
	scanf("%lf", &num1); 
	// scanf 에는 .3lf 이렇게 .나 특수기호 엔터등 다른걸 적으면 오류 난다 
	printf("실수2 입력 :");
	scanf("%lf", &num2);
	printf("실수3 입력 :");
	scanf("%lf", &num3);
	double small = num1 > num2 ? num2 : num1;
	small = small > num3 ? num3 : small;
	printf("가장 작은 실수는 %.3lf\n", small);
	
}
//Q 빌드에서 제외
//A 해당 소스코드 우클릭 -> 속성 -> 일반 -> 빌드에서 제외: 예 -> 저장
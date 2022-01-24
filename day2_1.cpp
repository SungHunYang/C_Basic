#include<stdio.h>
#define RATE 2.1 // 기호상수, 사용자 정의 상수 --> 전처리어로 하기 때문에 자료형 명시 안해도 됨
void main() {
	/*int num;
	//scanf_s("%d",&num,sizeof(int)); scanf_s는 이렇게 쓰는거다 근데 일단 쓰지 말자
	printf("정수입력: ");
	scanf("%d", &num);
	printf("num=%d\n", num);

	char c;
	printf("단일문자입력 : ");
	scanf(" %c", &c); --> 위에 정수에서 나온 enter를 버퍼가 먹을수 있게 띄어쓰기 함
	printf("c=%c", c);*/

	//상수 : 값을 변경할수없는 데이터
	// 변수 -> 상수화 // const , #define
	double radius;
	printf("반지름 입력 : ");
	scanf("%lf", &radius);
	const double PI = 3.1415; // 심볼릭 상수
	double area = radius * radius * PI;
	printf("원의 넓이는 %lf 입니다\n",area)

	RATE




}
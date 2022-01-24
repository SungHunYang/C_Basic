#include<stdio.h>
void main() {
	int i;
	double d;
	char c;

	printf("정수 입력 : ");
	scanf("%d", &i); //--> 이거 입력하고 enter 누르니까 굳이 줄바꿈 안해도 줄바꿈 된다 
	 // &<--주소 연산자 메모리 // 주소를 가르키는 연산자
	 // print 할때 & 안쓰는 이유는 원하는값이 아니라 주소 값이 변경되서  나온다 
	 //--> 주소를 보는건 '%u' 사용 
	printf("실수 입력 : ");
	scanf("%lf", &d);

	printf("단일문자 입력 : ");
	scanf(" %c", &c); //★ %c 입력 받을때는 앞에 한칸을 무조건 띄어야 한다  scanf_s() 함수 다음시간에

	printf("i=%d  d=%.3lf  c=%c\n\n", i, d, c);
} // Q. scanf에서 오류 발생
  // A. 프로젝트 - 속성 - C/C++ - 전처리기 - 전처리기 정의 - 편집 -_CRT_SECURE_NO_WARNINGS 추가
  // 이게 아니면 scanf_s() 이거 인데 이번에는 안다룸
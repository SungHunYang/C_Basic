#include<stdio.h>

void func1() {
	printf("내가 정의한 함수\n");
}
void func2(int num) {
	num++;
	printf("num= %d\n", num);
}
void add(int i1, int i2) {
	printf("%d + %d = %d\n", i1, i2, i1 + i2);
}
void show(int num1, int num2) {
	printf("%d 이(가) %d 중  %d가 크다", num1, num2,num1>num2?num1:num2);
}

void main() {
	//[함수]
	// 사용자 정의 함수
	add(100, 210);

	func1();
	func2(10);

	int a = 11;
	func2(a); // call by value(값에 의한 호출) --> a의 값 11만 간다

	int num = 12;
	func2(num);

	printf("a=%d, num=%d\n", a, num);

	show(100, 200);
}
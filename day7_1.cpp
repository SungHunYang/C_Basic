#include<stdio.h>
int power(int x, int y); // 함수원형 메인 밑에 함수를 넣고 싶어서
void func(int a, int b, int c);
void main() {
	// x의 y승을 반환하는 함수
	printf("%d의 %d 승은 %d입니다.\n", 2, 10, power(2,10));

	func(9,21,3);
}
int power(int x, int y) {
	int sum=1;
	for (int i = 0; i < y; i++) {
		sum *= x;
	}
	return sum;
}
void func(int a, int b, int c) {
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	for (int i = a; i <= b; i++) {
		if (i % c == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
}
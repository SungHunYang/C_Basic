#include<stdio.h>
int power(int x, int y); // �Լ����� ���� �ؿ� �Լ��� �ְ� �;
void func(int a, int b, int c);
void main() {
	// x�� y���� ��ȯ�ϴ� �Լ�
	printf("%d�� %d ���� %d�Դϴ�.\n", 2, 10, power(2,10));

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
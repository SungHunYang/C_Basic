#include<stdio.h>
int show(int a, int b) {
	int sum = 0;
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	return sum;
}
void main() {
	printf("5���� 13������ ������ '%d' �̴�\n", show(5, 13));
}
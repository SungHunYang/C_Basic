#include<stdio.h>
int fac(int n) {
	if (n == 1) {
		return 1;
	}
	return n * fac(n - 1);
}
void showNum(int n) {
	int na;
	int mok;
	na = n % 10;
	mok = n / 10;
	printf("%d ", na); // ��������
	if (mok > 0) {
		showNum(mok);
	}
	printf("%d ", na); // ��������
}
void main() {
	//[����Լ�, ��ȯȣ��]

	printf("5!=%d\n",fac(5));

	showNum(12345);

}
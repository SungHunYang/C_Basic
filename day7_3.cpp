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
	printf("%d ", na); // 끝에부터
	if (mok > 0) {
		showNum(mok);
	}
	printf("%d ", na); // 위에부터
}
void main() {
	//[재귀함수, 순환호출]

	printf("5!=%d\n",fac(5));

	showNum(12345);

}
#include<stdio.h>

int func3() {
	printf("func3() 호출됨\n");
	return 10; // 호출한 위치로 값(value)을 '즉시' 전달 후 종료
}
double show() {
	double num;
	printf("실수를 입력하세요 : ");
	scanf("%lf", &num);
	if (num < 0) {
		return -num;
	}
	return num;
}
void main() {

	int i = func3();
	printf("i=%d\n", i);

	printf("show()반환값 : %.3lf\n", show()); // 요런것도 가능

}
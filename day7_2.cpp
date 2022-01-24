#include<stdio.h>
void swap(int* a,int* b) { // 포인터 : 주소를 받는 자료형
	int tmp = *a;
	*a = *b; // *은 a가 가리키는 주소의 값
	*b = tmp;
}
void main() {

	int a = 10, b = 20;
	printf("교환전 : a=%d b=%d\n", a, b);
	swap(&a, &b); // 값에 의한 호출 => 포인터에 의한 호출
	printf("교환후 : a=%d b=%d\n", a, b);

}
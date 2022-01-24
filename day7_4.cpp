#include<stdio.h>
int global = 123; // 전역 변수
// 라이프 사이클 : 프로그램과 동일
void f() {
	printf("f() global=%d \n", global);
	int num = 100;
	printf("f() num=%d\n", num);

}
void func() {
	static int a = 0; // 정적변수: 지역변수의 라이플사이클을 전역변수(프로그램 수준으로)처럼 변경
	// 이건 선언하는겸 초기화 여서 무조건적으로 초기화 되지 않는다. 
	// 정적변수라 선언상태가 유지 된다.
	int b = 0;
	a++;
	b++;
	printf("a=%d, b=%d\n", a, b);
}
void main() {
	// [저장 공간 == 스토리지 클래스]
	

	f();
	int num = 10; // 지역변수(local)
	// 생존기간(라이프 사이클): 해당함수와 동일
	printf("num=%d\n", num);

	printf("gloval=%d \n", global);
	
	func();
	func();
	func();
}
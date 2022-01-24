#include<stdio.h>
void main() {
	// 하나의 프로젝트는 하나의 프로그램을 만듦 따라서 main이(test1 test2) 여러개 생길수 없다
	// main이 이미 저의 되어있으면 빌드에서 제외 우클릭 -> 속성 -> 일반 -> 빌드에서 제외
	int num = 10;

	printf("num= %d %d 입니다.\n\n", num,1234);

	int num1 = 10, num2 = 20;
	int sum = num1 + num2;
	printf("%d + %d = %d 입니다\n\n", num1, num2, sum);
	// 형식 지정자는 콤마 뒤에 순서대로 1:1 적용된다.

	// 예제 ) 콘솔창에 사각형의 밑변의 길이는 -- 입니다 사각형의 높이는 -- 입니다 사각형의 넓이는 -- 입니다
	
	int x=10;
	int y=20;
	int area=x*y;
	printf("사각형 밑변의 길이는 %d 입니다\n", x);
	printf("사각형 높이는 %d 입니다\n", y);
	printf("사각형 넓이는 %d 입니다\n", area);
} // 줄정렬= 코드정렬 : ctrl+a(전체선택) , ctrl+k,f(코드정렬)
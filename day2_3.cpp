#include<stdio.h>
void main() {
	// 형변환

	int i = 10.23;// 자동 형변환 --> 썩좋은건 아님
	int i2 = (int)10.93; // 명시적 형변환
	printf("i=%d i2=%d\n", i, i2);

	double d = 7; // 자동 형변환 --> 작은게 큰곳으로 들어가는건 괜찮
	printf("d=%.3lf\n", d);

	// 복합대입연산자
	int num = 10;
	num += 20; // num=num+20;
	printf("num= %d\n", num);

	//증감 연산자
	int num = 0;
	printf("num=%d\n", num);
	num++;// 후위증감연산자. --> 연산자의 우선순위가 매우 낮음(대입연산자보다 낮음)
	++num;// 전위증감연산자  --> 연산자의 우선순위가 매우 높음
	printf("num=%d\n", num);

	int a = 10;
	int b = ++a; // ++a;  -> b=a;
	printf("a=%d , b=%d\n", a, b);
	b = a++;  // b=a;  -> ++a;
	printf("a=%d , b=%d\n", a, b);

	int a = -1, b = 0, c = 1, d = 2;
	int res = ++a + b++;
	d = c++;
	printf("a=%d b=%d c=%d d=%d res=%d\n", a, b, c, d, res);
	//01210

}
//Q 쓰기용으로 열수없습니다
//A 다른 cmd창(.exe 실행파일)이 작동중 --> 닫아주고, 다시실행 하면 됨
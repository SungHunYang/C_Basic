#include<stdio.h>
void main() {
	/*
	int num1, num2;
	printf("정수1 입력 : ");
	scanf("%d", &num1);
	printf("정수2 입력 : ");
	scanf("%d", &num2); // scanf에는 불필요한 특수문자,기호,띄어쓰기 등을 기입 xx
	int tmp;
	if (num2 < num1) {
		tmp = num2;
		num2 = num1;
		num1 = tmp;
	
	}
	int hap=0;
	int i = num1;
	while (num2 >= i) {
		hap += i;
		i++;
	}
	printf("%d부터 %d까지의 총합은 %d입니다.\n", num1, num2, hap);
	*/
	/*
	int i=4;
	do {
		printf("i=%d\n", i);
		i++;
	} while (i <= 3);

	// 버튼식 구성, 값입력(유효범위 확인)
	
	int act=0;
	do {
		printf("1.카드조회 2.비밀번호 변경 3. 상담원 연결 \n");
		printf("입력 : ");
		scanf("%d", &act);
	} while (act<1 || 3<act);
	*/
	int act;
	do {
		printf("1.c\n2.g\n3.v\n입력: ");
		scanf("%d", &act);
	} while (act < 1 || 3 < act);
	char c;
	if (act == 1) {
		c = 'c';
	}
	else if (act == 2) {
		c = 'g';
	}
	else {
		c = 'v';
	}
	char al = 'a';
	while (al <= c) {
		printf("%c ", al);
		al++;
	}
	printf("\n");

















}
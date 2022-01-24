#include<stdio.h>
void main() {

	//for문
	//for (초기식; 조건식; 증감식){}

	for (int i = 0; i <= 3; i++) {
		printf("안녕하세요 \n");
	}
	int num;
	printf("정수 입력 : ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		printf("%d ", i);
	}
	printf("\n");

	int a,b;
	int tmp;
	printf("정수 1 입력 : ");
	scanf("%d", &a);
	printf("정수 2 입력 : ");
	scanf("%d", &b);
	if (a > b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	for (int i = a; i <= b; i++) {
		printf("%d ", i);
	}

	char le;

	while (1) {
		printf("단일문자 입력 : ");
		scanf(" %c", &le);
		if ('A' <= le && le <= 'Z') {
			le += 32;
		}
		if ('a' <= le && le <= 'z') {
			for (char i = 'a'; i <= le; i++) {
				printf("%c ", i);
			}
			break;
		}
		printf("다시 입력");
		}
	



}
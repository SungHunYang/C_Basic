#include<stdio.h>
void add(int a, int b) {
	static int cnt = 0;
	cnt++;
	printf("%d + %d = %d\n", a, b, a + b);
	printf("add()를 %d번 호출 하셨습니다.\n",cnt);
}
void mul(int a, int b) {
	static int cnt = 0;
	cnt++;
	printf("%d * %d = %d\n", a, b, a * b);
	printf("add()를 %d번 호출 하셨습니다.\n", cnt);
}
void main() {
	int a;
	int b;
	char act;

	while (true){
		printf("원하는 숫자 2개 적으세요 : ");
		scanf("%d%d", &a, &b);
		printf("원하는 부호 넣으세요 : ");
		scanf(" %c", &act);
		if (act == '+') {
			add(a, b);
		}
		else if (act == '*') {
			mul(a, b);
		}
		else {
			printf("종료합니다.");
			break;
		}
		}
}
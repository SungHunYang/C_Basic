#include<stdio.h>
void add(int a, int b) {
	static int cnt = 0;
	cnt++;
	printf("%d + %d = %d\n", a, b, a + b);
	printf("add()�� %d�� ȣ�� �ϼ̽��ϴ�.\n",cnt);
}
void mul(int a, int b) {
	static int cnt = 0;
	cnt++;
	printf("%d * %d = %d\n", a, b, a * b);
	printf("add()�� %d�� ȣ�� �ϼ̽��ϴ�.\n", cnt);
}
void main() {
	int a;
	int b;
	char act;

	while (true){
		printf("���ϴ� ���� 2�� �������� : ");
		scanf("%d%d", &a, &b);
		printf("���ϴ� ��ȣ �������� : ");
		scanf(" %c", &act);
		if (act == '+') {
			add(a, b);
		}
		else if (act == '*') {
			mul(a, b);
		}
		else {
			printf("�����մϴ�.");
			break;
		}
		}
}
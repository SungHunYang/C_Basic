#include<stdio.h>
void main() {

	//for��
	//for (�ʱ��; ���ǽ�; ������){}

	for (int i = 0; i <= 3; i++) {
		printf("�ȳ��ϼ��� \n");
	}
	int num;
	printf("���� �Է� : ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		printf("%d ", i);
	}
	printf("\n");

	int a,b;
	int tmp;
	printf("���� 1 �Է� : ");
	scanf("%d", &a);
	printf("���� 2 �Է� : ");
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
		printf("���Ϲ��� �Է� : ");
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
		printf("�ٽ� �Է�");
		}
	



}
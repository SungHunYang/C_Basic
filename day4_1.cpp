#include<stdio.h>
void main() {
	/*
	int num1, num2;
	printf("����1 �Է� : ");
	scanf("%d", &num1);
	printf("����2 �Է� : ");
	scanf("%d", &num2); // scanf���� ���ʿ��� Ư������,��ȣ,���� ���� ���� xx
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
	printf("%d���� %d������ ������ %d�Դϴ�.\n", num1, num2, hap);
	*/
	/*
	int i=4;
	do {
		printf("i=%d\n", i);
		i++;
	} while (i <= 3);

	// ��ư�� ����, ���Է�(��ȿ���� Ȯ��)
	
	int act=0;
	do {
		printf("1.ī����ȸ 2.��й�ȣ ���� 3. ���� ���� \n");
		printf("�Է� : ");
		scanf("%d", &act);
	} while (act<1 || 3<act);
	*/
	int act;
	do {
		printf("1.c\n2.g\n3.v\n�Է�: ");
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
#include<stdio.h>
#include<string.h>
void main() {
	//[���ڿ� �̵� ����]
	// 1. ���ڿ� �Է� --> �ҹ���
	// 2. ���� --> 1~25������ �Է�

	char str[20];
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	int a;
	printf("���� �Է� :");
	scanf("%d", &a);

	for (int i = 0; i < strlen(str); i++) {
		str[i] += a;
		if (str[i] > 122) {
			str[i] -= 26;
		}
	}
	printf("%s", str);



}
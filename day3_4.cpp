#include<stdio.h>
void main() {

	char ans;
	printf("����Ͻðڽ��ϱ�? ");
	scanf("%c", &ans);

	if (ans == 'y' || ans == 'Y') {
		printf("��� �����մϴ�");
	}
	else if (ans == 'n' || ans == 'N') {
		printf("�����մϴ�.");
	}
	else {
		printf("�߸��� �Է� �Դϴ�");
	}
}
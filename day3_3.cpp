#include<stdio.h>
void main() {
	//���� �Է� ���� ABF 80~100a60~79b 50~59c������ f

	int a;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &a);
	if (a < 0 || 100 < a) { // ��ȿ�� �˻�
		printf("�߸��� ���� �Է�\n");
	}

	else if (80 <= a) { // 8�� if �� ���п� ������ 100������ ���� �ԷµǱ� ������ a<=100 �ʿ����
		printf("A ����");
	}
	else if (60 <= a && a < 80) {
		printf("B ����");
	}
	else if (50 <= a && a < 60) {
		printf("C ����");
	}
	else {
		printf("F ����");
	}

}
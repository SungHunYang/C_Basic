#include<stdio.h>
void main() {
	// continue
	/*
	int i = 0;
	while (1) {
		if (i % 2) { // Ȧ���� ������� �ʰڽ��ϴ�. Ȧ���� �������� '1'�̿��� ���ǹ��� �ڵ� ture�� ��
			i++;
			continue; // "���" �ݺ����� ó������(while���� ���, ���ǽ�����) �̵�
		}
		printf("i=%d\n", i);
		if (i == 100) {
			break;
		}
		i++;
	}
	*/
	double i;
	while (1) {
		printf("\n�Ǽ� �Է� : ");
		scanf("%lf", &i);
		if (i < 0) {
			continue;
		}
		if (i == 0) {
			printf("����");
			break;
		}
		printf("%.3lf�� �Էµ�", i);
	}

}
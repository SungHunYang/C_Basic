#include<stdio.h>
#define SU 3
#define TEST 2
void main() {
	/*
	int stu[SU][TEST];

	int num = 0;
	for (int i = 0; i < 3; i++) {
		for (int a = 0; a < 2; a++) {
			printf("%d�� �л����� �Է� :", i + 1);
			scanf("%d", &stu[i][a]);
		}
		printf("\n");
	}
	for (int a = 0; a < sizeof(stu) / sizeof(stu[0]); a++) {
		printf("%d�� �л��� ������.. \n", a + 1);
		for (int i = 0; i < sizeof(stu[0]) / sizeof(stu[0][0]); i++) {
			printf("%d�� ", stu[a][i]);
		}
		printf("�Դϴ�.\n");
	}
	*/
	 // �̰� ���� �ٽ��ض�
#include<stdio.h>
#define SU 3
#define TEST 2
	void main() {

		int stu[SU][TEST];

		for (int a = 0; a < SU; a++) {
			printf("%d��° �л������Է���...\n", a + 1);
			for (int i = 0; i < TEST; i++) {
				printf("%d��°���輺���Է�: ", i + 1);
				scanf("%d", &stu[a][i]);
			}
			printf("\n");
		}


		printf("\n");

		int sum = 0;
		for (int a = 0; a < SU; a++) {
			
			printf("%d��° �л������� ", a + 1);
			for (int i = 0; i < TEST; i++) {
				printf("%d�� ", stu[a][i]);
				sum += stu[a][i];
			}
			printf("��������� %.2lf���Դϴ�.\n", sum * 1.0 / TEST);
		}
	}
	/*
	�л� 1��� �߰� / �⸻ ��� �� 2���� ������ ���ϴ�!

	3���� �л��� �����Ҷ�,

	������ ������ �Է�->���

	�л� 1���� �������(.2) ������ּ���!~~
	*/
}

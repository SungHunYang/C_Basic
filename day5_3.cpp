#include<stdio.h>
void main() {
	//������ �迭 == ������ �迭

	int stu1[3] = { 10,20,30 };
	int stu2[3] = { 11,12,13 };
	int stu3[3] = { 20,30,40 };
	int stu4[3] = { 60,61,50 };
	int stu[4][3] = { { 10,20,30 } ,{ 11,12,13 },{ 20,30,40 },{ 60,61,50 } };
	printf("stu �������迭�� ũ��= %d\n", sizeof(stu));
	printf("stu[0] �迭�� ũ�� = %d\n", sizeof(stu[0]));
	printf("stu[0][0] �迭�� ��� ũ��=%d\n", sizeof(stu[0][0]));

	for (int a = 0; a < sizeof(stu)/sizeof(stu[0]); a++) {
		printf("%d�� �л��� ������.. \n", a+1);
		for (int i = 0; i < sizeof(stu[0]) / sizeof(stu[0][0]); i++) {
			printf("%d�� ", stu[a][i]);
		}
		printf("�Դϴ�.\n");
	}


	int student[3][2];
	int num=0;
	for(int i = 0; i < 3; i++) {
		for (int a = 0; a < 2; a++) {
			printf("%d�� �л����� �Է� :", i+1);
			scanf("%d", num);
			student[i][a] = num;
		}
	}
	for (int a = 0; a < sizeof(student) / sizeof(student[0]); a++) {
		printf("%d�� �л��� ������.. \n", a + 1);
		for (int i = 0; i < sizeof(student[0]) / sizeof(student[0][0]); i++) {
			printf("%d�� ", student[a][i]);
		}
		printf("�Դϴ�.\n");
	}

}
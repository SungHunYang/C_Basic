#include<stdio.h>
void main() {
	//다차원 배열 == 이차원 배열

	int stu1[3] = { 10,20,30 };
	int stu2[3] = { 11,12,13 };
	int stu3[3] = { 20,30,40 };
	int stu4[3] = { 60,61,50 };
	int stu[4][3] = { { 10,20,30 } ,{ 11,12,13 },{ 20,30,40 },{ 60,61,50 } };
	printf("stu 이차원배열의 크기= %d\n", sizeof(stu));
	printf("stu[0] 배열의 크기 = %d\n", sizeof(stu[0]));
	printf("stu[0][0] 배열의 요소 크기=%d\n", sizeof(stu[0][0]));

	for (int a = 0; a < sizeof(stu)/sizeof(stu[0]); a++) {
		printf("%d번 학생의 점수는.. \n", a+1);
		for (int i = 0; i < sizeof(stu[0]) / sizeof(stu[0][0]); i++) {
			printf("%d점 ", stu[a][i]);
		}
		printf("입니다.\n");
	}


	int student[3][2];
	int num=0;
	for(int i = 0; i < 3; i++) {
		for (int a = 0; a < 2; a++) {
			printf("%d의 학생점수 입력 :", i+1);
			scanf("%d", num);
			student[i][a] = num;
		}
	}
	for (int a = 0; a < sizeof(student) / sizeof(student[0]); a++) {
		printf("%d번 학생의 점수는.. \n", a + 1);
		for (int i = 0; i < sizeof(student[0]) / sizeof(student[0][0]); i++) {
			printf("%d점 ", student[a][i]);
		}
		printf("입니다.\n");
	}

}
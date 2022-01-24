#include<stdio.h>
#define SU 3
#define TEST 2
void main() {
	/*
	int stu[SU][TEST];

	int num = 0;
	for (int i = 0; i < 3; i++) {
		for (int a = 0; a < 2; a++) {
			printf("%d의 학생점수 입력 :", i + 1);
			scanf("%d", &stu[i][a]);
		}
		printf("\n");
	}
	for (int a = 0; a < sizeof(stu) / sizeof(stu[0]); a++) {
		printf("%d번 학생의 점수는.. \n", a + 1);
		for (int i = 0; i < sizeof(stu[0]) / sizeof(stu[0][0]); i++) {
			printf("%d점 ", stu[a][i]);
		}
		printf("입니다.\n");
	}
	*/
	 // 이거 보고 다시해라
#include<stdio.h>
#define SU 3
#define TEST 2
	void main() {

		int stu[SU][TEST];

		for (int a = 0; a < SU; a++) {
			printf("%d번째 학생성적입력중...\n", a + 1);
			for (int i = 0; i < TEST; i++) {
				printf("%d번째시험성적입력: ", i + 1);
				scanf("%d", &stu[a][i]);
			}
			printf("\n");
		}


		printf("\n");

		int sum = 0;
		for (int a = 0; a < SU; a++) {
			
			printf("%d번째 학생성적은 ", a + 1);
			for (int i = 0; i < TEST; i++) {
				printf("%d점 ", stu[a][i]);
				sum += stu[a][i];
			}
			printf("평균점수는 %.2lf점입니다.\n", sum * 1.0 / TEST);
		}
	}
	/*
	학생 1명당 중간 / 기말 고사 총 2번의 시험을 봅니다!

	3명의 학생이 존재할때,

	각각의 점수를 입력->출력

	학생 1명의 평균점수(.2) 출력해주세요!~~
	*/
}

#include<stdio.h>
void main() {
	//점수 입력 학점 ABF 80~100a60~79b 50~59c나머지 f

	int a;
	printf("학점을 입력하세요: ");
	scanf("%d", &a);
	if (a < 0 || 100 < a) { // 유효성 검사
		printf("잘못된 점수 입력\n");
	}

	else if (80 <= a) { // 8번 if 문 덕분에 어차피 100이하의 값만 입력되기 때문에 a<=100 필요없음
		printf("A 학점");
	}
	else if (60 <= a && a < 80) {
		printf("B 학점");
	}
	else if (50 <= a && a < 60) {
		printf("C 학점");
	}
	else {
		printf("F 학점");
	}

}
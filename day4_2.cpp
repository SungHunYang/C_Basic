#include<stdio.h>
void main() {
	//[무한루프 , 무한 반복문]
	// '종료조건' 구현
	//
	int num;
	int sum=0;
	int i = 0;
	while (1) {
		printf("정수 입력 : ");
		scanf("%d", &num);
		if (num < 0) { // 종료 조건 
			printf("종료\n");
			break; // while문 "즉시" 종료 
		}
		else {
			printf("num=%d\n", num);
		}
		i++;
		sum += num;
	}
	double avg = sum*1.0 / i;
	printf("총합은 %d 이고, 평균은 %.3lf 입니다.\n", sum, avg);
	printf("\n");
	char act;
	while (1) {
		printf("단일문자 입력 : ");
		scanf(" %c", &act);
		
		if (65 <= act && act <= 90) { // ('a'<= act && act<='z') 이것도 가능
			printf(" %c 는 대문자 입니다.\n", act);
		}
		else if (97 <= act && act <= 122) { // 마찬가지
			printf(" %c 는 소문자 입니다.\n", act);
		}
		else { // 알파벳 이외의 모든 문자를 입력하면 종료하겠다.
			break;
		}
	}
}
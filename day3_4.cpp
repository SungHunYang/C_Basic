#include<stdio.h>
void main() {

	char ans;
	printf("계속하시겠습니까? ");
	scanf("%c", &ans);

	if (ans == 'y' || ans == 'Y') {
		printf("계속 진행합니다");
	}
	else if (ans == 'n' || ans == 'N') {
		printf("종료합니다.");
	}
	else {
		printf("잘못된 입력 입니다");
	}
}
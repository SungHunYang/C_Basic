#include<stdio.h>
#include<string.h>
void main() {
	//[단어 맞추기 게임]

	char word[10];
	printf("영단어 입력 : ");
	scanf("%s", word);
	char ans[10];
	// ans에 word만큼의 길이를 가진 ____ 를 대입
	strcpy(ans, word);
	for (int i = 0; i < strlen(ans); i++) {
		ans[i] = '_';
	}
	//for(int i=0; i<strlen(word); i++){
	//	ans[i] = '_';
	//	}
	// ans[strlen(word)]='\0'; --> 위에 처럼 넣었을때 길이에 맞춰 쓰레기 값이 나오기때문에
	// \0 널값을 넣어 문자열이 끝났다는걸 확인시켜줘야함

	while (true) {
		int check = 1; // ture, ON
		char c;
		printf("%s: ", ans);
		scanf(" %c", &c);
		for (int i = 0; i < strlen(word); i++) {
			if (word[i] == c) {
				ans[i] = c;
				check = 0; //false, OFF
			}
		}
		if (check) {
			printf("%c는 없는 문자입니다\n", c);
		}

		if (strcmp(ans,word)==0) {// 비교연산자 xx
			break;
		}
	}
	printf("\n%s 정답입니다", word);
}
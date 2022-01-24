#include<stdio.h>
#include<string.h>
void main() {
	//[문자열 이동 예제]
	// 1. 문자열 입력 --> 소문자
	// 2. 정수 --> 1~25까지만 입력

	char str[20];
	printf("문자열 입력 : ");
	scanf("%s", str);
	int a;
	printf("정수 입력 :");
	scanf("%d", &a);

	for (int i = 0; i < strlen(str); i++) {
		str[i] += a;
		if (str[i] > 122) {
			str[i] -= 26;
		}
	}
	printf("%s", str);



}
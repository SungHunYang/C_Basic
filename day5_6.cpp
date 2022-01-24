#include<stdio.h>
#include<string.h>
void main() {

	// 문자열을 다루기 쉽게 해주는 함수들

	char str[20];
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력하신 문자열은 [%s]입니다.\n", str);

	printf("크기 = %d \n", sizeof(str));
	printf("길이 = %d \n", strlen(str));// '\0'(널문자)를 제외한 실제 이용공간을 리턴한다.

	int i;
	i = 10;
	char sta[10];
	//sta = "apple"; --> 이거 안됨
	strcpy(sta, "apple"); // 이걸 사용해야 들어감 //대입하는 함수
	printf("sta =%s\n", sta);

	strcat(sta, "님"); // 이어쓰기 함수
	printf("sta = %s \n", sta);

	char str1[20] = "apple";
	char str2[20] = "banana";
	char str3[20] = "kiwi";

	strcpy(str1, str3);
	strcat(str2, str1);

	printf("1: %s\n", str1);
	printf("2: %s\n", str2);
	printf("3: %s\n", str3);




}
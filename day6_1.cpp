#include<stdio.h>
#include<string.h>
void main() {
	//문자열 1개 입력
	// AppLe 
	// 대문자는 소문자로 소문자는 대문자로 출력
	// strlen() 이용, 아스키 코드

	char str[20];
	printf("문자열 입력 : ");
	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++) {
		if ('a' <= str[i] && str[i] <= 'z') {
			str[i] -= 32;
		}
		else if ('A' <=str[i] && str[i] <='Z') {
			str[i] += 32;
		}
	}
	printf("%s", str);

	/*#include<stdio.h>
#include<string.h>
void main() {

   char str[20];
   printf("문자열입력: ");
   scanf("%s", str);
   // strlen(), 아스키코드 이용!

   printf("변경전: %s\n", str);

   // 문자열 1개 입력
   // AppLe
   // -> aPPlE  출력해주세요!~~
   for (int i = 0; i < strlen(str); i++) {
      if ('A' <= str[i] && str[i] <= 'Z') {
         str[i] += 32;
      }
      else {
         str[i] -= 32;
      }
   }


   printf("변경후: %s\n", str);

}*/ //--> 정답



}
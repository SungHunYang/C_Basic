#include<stdio.h>
void main() {
	//[문자열]

	// 문자열 == 문자배열 + '\0' (1byte. 널문자 추가)

	char arr[5] = { 'a','p','p','l','e' };
	//문자배열

	char str[6] = { 'a','p','p','l','e', '\0' };
	char str2[6] = "apple";   // -> 위에랑 똑같은거
	// 문자배열 + '\0' == 문자열  //내가 몇개 입력할지모르면 크기를 넓게 입력해라 

	// 'a' vs "a"
	// (단일)문자.1byte .char
	// 문자열.뒤에 '\0'가 추가되어있어, 2byte

	printf("%s\n", str);
	printf("%s\n", str2);

	printf("문자열 입력 : ");
	scanf("%s", str); // &가 없는 이유 : 배열명 ==&배열[0] 지금 컴퓨터는 &str[0]로 인식하고 있음
	// 띄어쓰기 널 엔터를 구분 못해서 띄어 쓰기 안됌
	// int arr[10] --> arr== &arr[0]
	printf("입력하신 문자열은 [%s]입니다. \n", str);
	
	/*printf("문자열 입력 : ");
	gets(str);  --> c언어에만 있는 입력값 그리고 gets()자리에는 문자열만 올수있음
	--> 띄어쓰기를 인식함
	printf("입력하신 문자열은 [%s]입니다. \n", str);*/
}
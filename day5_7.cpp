#include<stdio.h>
#include<string.h>
void main() {
	
	//비교하는 함수

	char str[] = "apple";

	// str =="apple" xxxx  == 는 문자 정수 실수 이런것들을 비교하는 것

	printf("apple vs apple = %d\n", strcmp("apple", "apple")); // 서로 같으면 '0'
	printf("apple vs banana = %d\n", strcmp("apple", "banana")); // 다르면 '-1' 이나 '1'
	printf("banana vs apple = %d\n", strcmp("banana", "apple")); 
	// 아스키코드 순으로 --> 앞에 있는게 더 작으면 -1 , 뒤에있는게 더 작으면 1 

	if (strcmp(str, "apple") == 0) {
		printf("같다.\n");
	}
	else {
		printf("다르다\n");
	}

	
}
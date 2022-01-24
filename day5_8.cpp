#include<stdio.h>
#include<string.h>
void main() {
	// 1. 문자열을 저장할수있는 공간이 존재한다.
	// 2. 문자열을 입력받아,
	// 3. 단일문자를 1개 입력
	// 4. 해당 문자열에서 단일문자가 몇개 있는지 출력
	/*
	int cnt = 0;
	char str[10];
	printf("문자열 입력 : ");
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'a') {
			cnt++;
		}
	}
	printf("a는 %d개 존재합니다.\n", cnt);
	*/

	
	char str[10];
	//char c;
	printf("문자열 입력 :");
	scanf("%s", str);
	/*printf("찾을 단일 문자 입력 : ");
	scanf(" %c", &c);*/
	for (char c = 'a'; c <= 'z'; c++) {
		int cnt = 0;
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == c) {
				cnt++;
			}
		}
		if (cnt == 0) {
			continue;
		}
		printf("%c : %d개\n", c, cnt);
	}
	
}
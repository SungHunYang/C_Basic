#include<stdio.h>
#include<string.h>
void main() {
	// 1. ���ڿ��� �����Ҽ��ִ� ������ �����Ѵ�.
	// 2. ���ڿ��� �Է¹޾�,
	// 3. ���Ϲ��ڸ� 1�� �Է�
	// 4. �ش� ���ڿ����� ���Ϲ��ڰ� � �ִ��� ���
	/*
	int cnt = 0;
	char str[10];
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'a') {
			cnt++;
		}
	}
	printf("a�� %d�� �����մϴ�.\n", cnt);
	*/

	
	char str[10];
	//char c;
	printf("���ڿ� �Է� :");
	scanf("%s", str);
	/*printf("ã�� ���� ���� �Է� : ");
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
		printf("%c : %d��\n", c, cnt);
	}
	
}
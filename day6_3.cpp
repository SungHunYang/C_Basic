#include<stdio.h>
#include<string.h>
void main() {
	//[�ܾ� ���߱� ����]

	char word[10];
	printf("���ܾ� �Է� : ");
	scanf("%s", word);
	char ans[10];
	// ans�� word��ŭ�� ���̸� ���� ____ �� ����
	strcpy(ans, word);
	for (int i = 0; i < strlen(ans); i++) {
		ans[i] = '_';
	}
	//for(int i=0; i<strlen(word); i++){
	//	ans[i] = '_';
	//	}
	// ans[strlen(word)]='\0'; --> ���� ó�� �־����� ���̿� ���� ������ ���� �����⶧����
	// \0 �ΰ��� �־� ���ڿ��� �����ٴ°� Ȯ�ν��������

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
			printf("%c�� ���� �����Դϴ�\n", c);
		}

		if (strcmp(ans,word)==0) {// �񱳿����� xx
			break;
		}
	}
	printf("\n%s �����Դϴ�", word);
}
#include<stdio.h>
#include<string.h>
void main() {

	// ���ڿ��� �ٷ�� ���� ���ִ� �Լ���

	char str[20];
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է��Ͻ� ���ڿ��� [%s]�Դϴ�.\n", str);

	printf("ũ�� = %d \n", sizeof(str));
	printf("���� = %d \n", strlen(str));// '\0'(�ι���)�� ������ ���� �̿������ �����Ѵ�.

	int i;
	i = 10;
	char sta[10];
	//sta = "apple"; --> �̰� �ȵ�
	strcpy(sta, "apple"); // �̰� ����ؾ� �� //�����ϴ� �Լ�
	printf("sta =%s\n", sta);

	strcat(sta, "��"); // �̾�� �Լ�
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
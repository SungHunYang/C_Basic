#include<stdio.h>
#include<string.h>
void main() {
	//���ڿ� 1�� �Է�
	// AppLe 
	// �빮�ڴ� �ҹ��ڷ� �ҹ��ڴ� �빮�ڷ� ���
	// strlen() �̿�, �ƽ�Ű �ڵ�

	char str[20];
	printf("���ڿ� �Է� : ");
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
   printf("���ڿ��Է�: ");
   scanf("%s", str);
   // strlen(), �ƽ�Ű�ڵ� �̿�!

   printf("������: %s\n", str);

   // ���ڿ� 1�� �Է�
   // AppLe
   // -> aPPlE  ������ּ���!~~
   for (int i = 0; i < strlen(str); i++) {
      if ('A' <= str[i] && str[i] <= 'Z') {
         str[i] += 32;
      }
      else {
         str[i] -= 32;
      }
   }


   printf("������: %s\n", str);

}*/ //--> ����



}
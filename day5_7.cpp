#include<stdio.h>
#include<string.h>
void main() {
	
	//���ϴ� �Լ�

	char str[] = "apple";

	// str =="apple" xxxx  == �� ���� ���� �Ǽ� �̷��͵��� ���ϴ� ��

	printf("apple vs apple = %d\n", strcmp("apple", "apple")); // ���� ������ '0'
	printf("apple vs banana = %d\n", strcmp("apple", "banana")); // �ٸ��� '-1' �̳� '1'
	printf("banana vs apple = %d\n", strcmp("banana", "apple")); 
	// �ƽ�Ű�ڵ� ������ --> �տ� �ִ°� �� ������ -1 , �ڿ��ִ°� �� ������ 1 

	if (strcmp(str, "apple") == 0) {
		printf("����.\n");
	}
	else {
		printf("�ٸ���\n");
	}

	
}
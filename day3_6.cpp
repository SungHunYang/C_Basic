#include<stdio.h>
void main() {

	//[�ݺ���]

	//while : Ư�������� �����Ҷ����� ��� ����
	int i = 1;
	while (/*���ǽ�*/i<=3) {
		//���๮;
		printf("�ȳ��ϼ���\n");
		i++;

	}
	printf("���� i= %d \n\n", i);
	
	int num;
	printf("�����Է� : ");
	scanf("%d", &num);
	i = 1;
	while (i <= num) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	printf("���� i= %d \n", i);


	int a;
	printf("�����Է� : ");
	scanf("%d", &a);
	i = 1;
	int cnt = 0;
	int hap =0;
	printf("[");
	while (i <= a) {
		if (i % 2 == 1) {
			printf("%d ", i);
			cnt++;
			hap += i;
		}
		i++;
	}
	printf("]\nȦ���� ���� %d : �� %d ", cnt, hap);
}
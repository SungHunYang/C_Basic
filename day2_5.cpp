#include<stdio.h>
void main() {
	//���׿�����== ���ǿ�����
	// ���ǽ� ? T:F 

	int num = 10 > 5 ? 100 : 200;
	printf("num= %d\n", num);

	//����1 ����(����)�� 1�� �Է� 50���ϸ� f 51�̻� Pass

	printf("������ �Է� :");
	int a;
	scanf("%d", &a);
	char grade = a > 50 ? 'P' : 'F';
	printf("����� ������ %c\n", grade); 
	// ���⼭ ���۸� �����Ҽ��� �ִµ� 
	// scanf�� printf ���� ���� ���� scanf scanf �϶� enter ���� ���� ���� 
	
	//����2 �Ǽ� 3�� ���� ���� �Ǽ� ���
	
	double num1, num2, num3;
	/*
	printf("�Ǽ� 3�� �Է� :");
	scanf("%lf%lf%lf",&a,&b,&c); --> �ѹ��� �ֱ� cmd���� �Է��Ҷ� ����� 3�� �Է� 
	*/
	printf("�Ǽ�1 �Է� :");
	scanf("%lf", &num1); 
	// scanf ���� .3lf �̷��� .�� Ư����ȣ ���͵� �ٸ��� ������ ���� ���� 
	printf("�Ǽ�2 �Է� :");
	scanf("%lf", &num2);
	printf("�Ǽ�3 �Է� :");
	scanf("%lf", &num3);
	double small = num1 > num2 ? num2 : num1;
	small = small > num3 ? num3 : small;
	printf("���� ���� �Ǽ��� %.3lf\n", small);
	
}
//Q ���忡�� ����
//A �ش� �ҽ��ڵ� ��Ŭ�� -> �Ӽ� -> �Ϲ� -> ���忡�� ����: �� -> ����
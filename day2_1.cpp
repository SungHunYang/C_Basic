#include<stdio.h>
#define RATE 2.1 // ��ȣ���, ����� ���� ��� --> ��ó����� �ϱ� ������ �ڷ��� ��� ���ص� ��
void main() {
	/*int num;
	//scanf_s("%d",&num,sizeof(int)); scanf_s�� �̷��� ���°Ŵ� �ٵ� �ϴ� ���� ����
	printf("�����Է�: ");
	scanf("%d", &num);
	printf("num=%d\n", num);

	char c;
	printf("���Ϲ����Է� : ");
	scanf(" %c", &c); --> ���� �������� ���� enter�� ���۰� ������ �ְ� ���� ��
	printf("c=%c", c);*/

	//��� : ���� �����Ҽ����� ������
	// ���� -> ���ȭ // const , #define
	double radius;
	printf("������ �Է� : ");
	scanf("%lf", &radius);
	const double PI = 3.1415; // �ɺ��� ���
	double area = radius * radius * PI;
	printf("���� ���̴� %lf �Դϴ�\n",area)

	RATE




}
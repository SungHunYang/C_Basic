#include<stdio.h>
void swap(int* a,int* b) { // ������ : �ּҸ� �޴� �ڷ���
	int tmp = *a;
	*a = *b; // *�� a�� ����Ű�� �ּ��� ��
	*b = tmp;
}
void main() {

	int a = 10, b = 20;
	printf("��ȯ�� : a=%d b=%d\n", a, b);
	swap(&a, &b); // ���� ���� ȣ�� => �����Ϳ� ���� ȣ��
	printf("��ȯ�� : a=%d b=%d\n", a, b);

}
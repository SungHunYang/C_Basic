#include<stdio.h>

void func1() {
	printf("���� ������ �Լ�\n");
}
void func2(int num) {
	num++;
	printf("num= %d\n", num);
}
void add(int i1, int i2) {
	printf("%d + %d = %d\n", i1, i2, i1 + i2);
}
void show(int num1, int num2) {
	printf("%d ��(��) %d ��  %d�� ũ��", num1, num2,num1>num2?num1:num2);
}

void main() {
	//[�Լ�]
	// ����� ���� �Լ�
	add(100, 210);

	func1();
	func2(10);

	int a = 11;
	func2(a); // call by value(���� ���� ȣ��) --> a�� �� 11�� ����

	int num = 12;
	func2(num);

	printf("a=%d, num=%d\n", a, num);

	show(100, 200);
}
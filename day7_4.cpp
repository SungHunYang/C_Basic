#include<stdio.h>
int global = 123; // ���� ����
// ������ ����Ŭ : ���α׷��� ����
void f() {
	printf("f() global=%d \n", global);
	int num = 100;
	printf("f() num=%d\n", num);

}
void func() {
	static int a = 0; // ��������: ���������� �����û���Ŭ�� ��������(���α׷� ��������)ó�� ����
	// �̰� �����ϴ°� �ʱ�ȭ ���� ������������ �ʱ�ȭ ���� �ʴ´�. 
	// ���������� ������°� ���� �ȴ�.
	int b = 0;
	a++;
	b++;
	printf("a=%d, b=%d\n", a, b);
}
void main() {
	// [���� ���� == ���丮�� Ŭ����]
	

	f();
	int num = 10; // ��������(local)
	// �����Ⱓ(������ ����Ŭ): �ش��Լ��� ����
	printf("num=%d\n", num);

	printf("gloval=%d \n", global);
	
	func();
	func();
	func();
}
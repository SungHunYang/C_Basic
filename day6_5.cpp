#include<stdio.h>

int func3() {
	printf("func3() ȣ���\n");
	return 10; // ȣ���� ��ġ�� ��(value)�� '���' ���� �� ����
}
double show() {
	double num;
	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf("%lf", &num);
	if (num < 0) {
		return -num;
	}
	return num;
}
void main() {

	int i = func3();
	printf("i=%d\n", i);

	printf("show()��ȯ�� : %.3lf\n", show()); // �䷱�͵� ����

}
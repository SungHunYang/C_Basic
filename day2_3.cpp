#include<stdio.h>
void main() {
	// ����ȯ

	int i = 10.23;// �ڵ� ����ȯ --> �������� �ƴ�
	int i2 = (int)10.93; // ����� ����ȯ
	printf("i=%d i2=%d\n", i, i2);

	double d = 7; // �ڵ� ����ȯ --> ������ ū������ ���°� ����
	printf("d=%.3lf\n", d);

	// ���մ��Կ�����
	int num = 10;
	num += 20; // num=num+20;
	printf("num= %d\n", num);

	//���� ������
	int num = 0;
	printf("num=%d\n", num);
	num++;// ��������������. --> �������� �켱������ �ſ� ����(���Կ����ں��� ����)
	++num;// ��������������  --> �������� �켱������ �ſ� ����
	printf("num=%d\n", num);

	int a = 10;
	int b = ++a; // ++a;  -> b=a;
	printf("a=%d , b=%d\n", a, b);
	b = a++;  // b=a;  -> ++a;
	printf("a=%d , b=%d\n", a, b);

	int a = -1, b = 0, c = 1, d = 2;
	int res = ++a + b++;
	d = c++;
	printf("a=%d b=%d c=%d d=%d res=%d\n", a, b, c, d, res);
	//01210

}
//Q ��������� ���������ϴ�
//A �ٸ� cmdâ(.exe ��������)�� �۵��� --> �ݾ��ְ�, �ٽý��� �ϸ� ��
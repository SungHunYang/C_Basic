#include<stdio.h>
void main() {
	// [������]

	// ���������
	int a = 10, b=3;
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b); // INT,������,�� ������
	printf("%d %% %d = %d\n", a, b, a % b); // MOD,������ ������


	int score1, score2;
	printf("�߰���缺��:");
	scanf("%d", &score1);
	printf("�⸻��缺��:");
	scanf("%d", &score2);
	int sum = score1 + score2;
	double avg = sum / 2.0; // ���ϳ��� ��� *1.0
	printf("���� : %d��, ��� : %.2lf���Դϴ�.\n", sum, avg);


}
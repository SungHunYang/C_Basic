#include<stdio.h>
void main() {

	//[switch��]

    int num = 1;
    switch (num) { // ���� or ��
    case 1:
        printf("�ϳ�!\n");
        break;
    case 2:
        printf("��!\n");
        break;
    case 3:
        printf("��!\n");
        break;
    default:  // break�� ������ ���� default���� ���� // else�� ���� �ʼ� �ƴ�
        printf("�ش����...\n");
    }

    //���� �� 10+20 ���� ���� ���� �Է� �ϸ� ����� ������

    int num1, num2;
    char a;
    printf("���� �Է� 2�� : ");
    scanf("%d%d", &num1, &num2);
    printf("��ȣ �Է� : ");
    scanf(" %c", &a);


    switch (a) {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
   
    }

}
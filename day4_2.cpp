#include<stdio.h>
void main() {
	//[���ѷ��� , ���� �ݺ���]
	// '��������' ����
	//
	int num;
	int sum=0;
	int i = 0;
	while (1) {
		printf("���� �Է� : ");
		scanf("%d", &num);
		if (num < 0) { // ���� ���� 
			printf("����\n");
			break; // while�� "���" ���� 
		}
		else {
			printf("num=%d\n", num);
		}
		i++;
		sum += num;
	}
	double avg = sum*1.0 / i;
	printf("������ %d �̰�, ����� %.3lf �Դϴ�.\n", sum, avg);
	printf("\n");
	char act;
	while (1) {
		printf("���Ϲ��� �Է� : ");
		scanf(" %c", &act);
		
		if (65 <= act && act <= 90) { // ('a'<= act && act<='z') �̰͵� ����
			printf(" %c �� �빮�� �Դϴ�.\n", act);
		}
		else if (97 <= act && act <= 122) { // ��������
			printf(" %c �� �ҹ��� �Դϴ�.\n", act);
		}
		else { // ���ĺ� �̿��� ��� ���ڸ� �Է��ϸ� �����ϰڴ�.
			break;
		}
	}
}
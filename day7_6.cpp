#include<stdio.h>
void main() {
	//[���������]
	// .txt ���� ����

	FILE* in = fopen("input.txt", "r");
	// in �� �ĺ��� �̸�
	// r: read. �б� ���

	FILE* out = fopen("output.txt", "w"); // ��� ����� �Ѱű� ������ ��� ������.
	// w: write. ������
	// ����, output.txt������ �̹� �����ߴٸ� ������ ����Ⱑ �ȴ�!

	double d;
	char c;
	int str;
	char num[20];
	fscanf(in,"%d%lf %c%s",&str,&d,&c, num);
	fprintf(out,"num=%s\n", num);
	fprintf(out,"d= %lf\n", d);
	fprintf(out,"c= %c\n", c);
	fprintf(out,"str= %d\n", str);




	fclose(out);
	fclose(in);
	// �������� �ݾ��ֱ�

}
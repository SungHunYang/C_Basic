#include<stdio.h>
void main() {

	// input2.txt�� ���� ������ 5�� ����
	// output2.txt�� ���� = ��� =.2 ���
	

	FILE* in = fopen("input2.txt", "r");
	FILE* out = fopen("output2.txt", "w");

	int a, b, c, d, e;
	fscanf(in, "%d%d%d%d%d", &a, &b, &c, &d, &e);
	int hap = a + b + c + d + e;
	double avg = hap * 1.0 / 5;
	fprintf(out, "����=%d\n", hap);
	fprintf(out, "���=%.2lf\n", avg);
	
	// ��� ���Ͽ��� ���� EOF�̶�°� �����Ѵ�
	/*
	while(!feof(in)){ // feof(in): in�� EOF�ΰ�?
	int num;
	int cnt=0; // ������ �𸦶�
	fscanf(in, "%d", &num);
	sum+=num;
	cnt++
	}
	*/
	
	fclose(in);
	fclose(out);
}
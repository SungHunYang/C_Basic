#include<stdio.h>
void main() {

	// input2.txt에 정수 데이터 5개 저장
	// output2.txt에 총합 = 평균 =.2 출력
	

	FILE* in = fopen("input2.txt", "r");
	FILE* out = fopen("output2.txt", "w");

	int a, b, c, d, e;
	fscanf(in, "%d%d%d%d%d", &a, &b, &c, &d, &e);
	int hap = a + b + c + d + e;
	double avg = hap * 1.0 / 5;
	fprintf(out, "총합=%d\n", hap);
	fprintf(out, "평균=%.2lf\n", avg);
	
	// 모든 파일에는 끝에 EOF이라는게 존재한다
	/*
	while(!feof(in)){ // feof(in): in이 EOF인가?
	int num;
	int cnt=0; // 개수를 모를때
	fscanf(in, "%d", &num);
	sum+=num;
	cnt++
	}
	*/
	
	fclose(in);
	fclose(out);
}
#include<stdio.h>
void main() {
	//[파일입출력]
	// .txt 문서 파일

	FILE* in = fopen("input.txt", "r");
	// in 은 식별자 이름
	// r: read. 읽기 모드

	FILE* out = fopen("output.txt", "w"); // 얘는 쓰기로 한거기 때문에 없어도 괜찮다.
	// w: write. 쓰기모드
	// 만약, output.txt파일이 이미 존재했다면 내용이 덮어쓰기가 된다!

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
	// 열었던거 닫아주기

}
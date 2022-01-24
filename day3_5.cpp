#include<stdio.h>
void main() {

	//[switch문]

    int num = 1;
    switch (num) { // 변수 or 값
    case 1:
        printf("하나!\n");
        break;
    case 2:
        printf("둘!\n");
        break;
    case 3:
        printf("셋!\n");
        break;
    default:  // break가 없으면 여기 default까지 수행 // else와 유사 필수 아님
        printf("해당없음...\n");
    }

    //예제 식 10+20 정수 문자 정수 입력 하면 결과값 나오게

    int num1, num2;
    char a;
    printf("정수 입력 2개 : ");
    scanf("%d%d", &num1, &num2);
    printf("부호 입력 : ");
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
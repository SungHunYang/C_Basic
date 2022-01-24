#include<stdio.h>
void main() {
	//[비교연산자]
	//[논리연산자]

	// T:1 / F:0
	printf("10>5 = %d\n", 10 > 5);
	printf("10>=5 = %d\n", 10 >= 5);
	printf("10<5 = %d\n", 10 < 5);
	printf("10<5 = %d\n", 10 <= 5);
	printf("5==5 = %d\n", 5 == 5);
	printf("10!=5 = %d\n", 10 != 5);
	printf("\n\n");
	// AND: ~~이면서, 동시에, ~~이고, 그리고
	// OR: ~~거나, 또는, 혹은
	// NOT: 부정

	printf("10>5 and 10>6  =  %d\n", (10 > 5) && (10 > 6));
	printf("10<5 or 10>6  =  %d\n", (10 < 5) || (10 > 6));
	printf("not 10>5  =  %d\n", !(10 > 5));


}
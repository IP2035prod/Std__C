/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main () {
	int input;
    int min;
    int max;
	printf("Введите число (целочисленное). \n");
	scanf("%d", &input);
	printf("Введите левую границу диапазона (целочисленное). \n");
	scanf("%d", &min);
	printf("Введите правую границу диапазона (целочисленное). \n");
	scanf("%d", &max);
	if (input < min || input > max) {
	    printf("Значение ");
	    printf("%d ", input);
	    printf("не входит в диапазон от ");
	    printf("%d ", min);
	    printf("до ");
	    printf("%d ", max);
	    printf(".");
	}
	else if (input >= min && input <= max) {
	    printf("Значение ");
	    printf("%d ", input);
	    printf("входит в диапазон от ");
	    printf("%d ", min);
	    printf("до ");
	    printf("%d ", max);
	    printf(".");
	}
	return 0;
}

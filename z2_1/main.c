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
	    printf("Значение %d не входит в диапазон от %d до %d.", input, min, max);
	}
	else if (input >= min && input <= max) {
	    printf("Значение %d входит в диапазон от %d до %d.", input, min, max);
	}
	return 0;
}


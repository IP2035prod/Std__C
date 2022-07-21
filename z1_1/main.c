/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int main () {
	int input = 0;
	float a[4];
	printf("Uo = Ui * (R1 / (R2 + R1). Введите переменную для расчета (1 = Uo, 2 = Ui, 3 = R1, 4 = R4).\n");
	//Считаю по заданной формуле, коректность значений (прим: отрицательное сопротивление) не учитываю.
	scanf("%d", &input);
	switch (input){
	case 1:    
	    printf("Выбран расчет Uo.\nВведите значение Ui.\n"); 
	    scanf("%a", &a[2]);
	    printf("Введите значение R1.\n");
	    scanf("%a", &a[3]);
	    printf("Введите значение R2.\n");
	    scanf("%a", &a[4]);
	    a[input] = a[2]*(a[3]/(a[4]+a[3]));
	    printf("Значение Uo = %f\n", a[input]); 
	    break;
	case 2:
	    printf("Выбран расчет Ui.\nВведите значение Uo.\n"); 
	    scanf("%a", &a[1]);
	    printf("Введите значение R1.\n");
	    scanf("%a", &a[3]);
	    printf("Введите значение R2.\n");
	    scanf("%a", &a[4]);
	    a[input] = a[1]/(a[3]/(a[4]+a[3]));
	    printf("Значение Ui = %f\n", a[input]); 
	    break;
	case 3:
	    printf("Выбран расчет R1.\nВведите значение Uo.\n"); 
	    scanf("%a", &a[1]);
	    printf("Введите значение Ui.\n");
	    scanf("%a", &a[2]);
	    printf("Введите значение R2.\n");
	    scanf("%a", &a[4]);
	    a[input] = (a[1]*a[4])/(a[2]-a[1]);
	    printf("Значение R1 = %f\n", a[input]); 
	    break;
    	case 4:
	    printf("Выбран расчет R2.\nВведите значение Uo.\n");
	    scanf("%a", &a[1]);
	    printf("Введите значение Ui.\n");
	    scanf("%a", &a[2]);
	    printf("Введите значение R1.\n");
	    scanf("%a", &a[3]);
	    a[input] = (a[2]*a[3]-a[1]*a[3])/(a[1]);
	    printf("Значение R2 = %f\n", a[input]);
	    break;
  	default:
	    printf("Неккоректное значение \n");
	}
	printf("Конец программы.");
	return 0;
}





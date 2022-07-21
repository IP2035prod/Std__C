/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main () {
	int input = 0;
	float Uo;
	float Ui;
	float R1;
	float R2;
	printf("Uo = Ui * (R1 / (R2 + R1). Введите переменную для расчета (1 = Uo, 2 = Ui, 3 = R1, 4 = R4).\n");
	//Считаю по заданной формуле, коректность значений (прим: отрицательное сопротивление) не учитываю.
	scanf("%d", &input);
	if (input == 1) {
	    printf("Выбран расчет Uo.\n" );
	    printf("Введите значение Ui.\n");
	    scanf("%a", &Ui);
	    printf("Введите значение R1.\n");
	    scanf("%a", &R1);
	    printf("Введите значение R2.\n");
	    scanf("%a", &R2);
	    Uo = Ui*(R1/(R2+R1));
	    printf("Значение Uo = ");
	    printf("%f\n", Uo);
	}
	else if (input == 2)
	{
	    printf("Выбран расчет Ui.\n" );
	    printf("Введите значение Uo.\n");
	    scanf("%a", &Uo);
	    printf("Введите значение R1.\n");
	    scanf("%a", &R1);
	    printf("Введите значение R2.\n");
	    scanf("%a", &R2);
	    Ui = Uo/(R1/(R2+R1));
	    printf("Значение Ui = ");
	    printf("%f\n", Ui);
	}   
	else if (input == 3)
	{
	    printf("Выбран расчет R1.\n" );
	    printf("Введите значение Uo.\n");
	    scanf("%a", &Uo);
	    printf("Введите значение Ui.\n");
	    scanf("%a", &Ui);
	    printf("Введите значение R2.\n");
	    scanf("%a", &R2);
	    R1 = (Uo*R2)/(Ui-Uo);
	    printf("Значение R1 = ");
	    printf("%f\n", R1);
	}   
	else if (input == 4)
	{
	    printf("Выбран расчет R2.\n" );
	    printf("Введите значение Uo.\n");
	    scanf("%a", &Uo);
	    printf("Введите значение Ui.\n");
	    scanf("%a", &Ui);
	    printf("Введите значение R1.\n");
	    scanf("%a", &R1);
	    R2 = (Ui*R1-Uo*R1)/(Uo);
	    printf("Значение R2 = ");
	    printf("%f\n", R2);
	}   
	else if (input < 1 || input > 4)
	{
	    printf("Неккоректное значение \n");
	}
	printf("Конец программы.");
	return 0;
}

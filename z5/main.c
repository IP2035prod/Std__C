/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h> //Библиотека математики из видео. 

int calc(float a, float b, float c, float* X1, float* X2) //коэфф-ты и ссылки на корни из программы.
{
	float D; //Дискриминант.
	
	D = b*b-(4*a*c);
	
	if (a == 0) // Линейное ур-е.
	{
		*X1 = -c/b;
		return 0; //Значение D.
	} 
	else if (D > 0) // 2 действ. корня ур-я.
	{
		*X1 = (-b+sqrt(D))/2*a;
		*X2 = (-b-sqrt(D))/2*a;
		return 1; //Значение D.
	} 
	else if (D == 0) // 1 действ. кореня ур-я.
	{
		*X1 = -b/(2*a);
		return 0; //Значение D.
	} 
	else if (D < 0) // нет действ. корней ур-я.
	{
		return -1; //Значение D.
	}
}
int main()
{
	float a, b, c; // Коэф-ты ур-я.
	float X1, X2; // Корни ур-я.

	printf("Решение квадратного уравнения вида 'ax2 + bx + c = 0'\nВведите коэффициент a.\n");
	scanf("%f", &a);
	printf("Введите коэффициент b. \n");
	scanf("%f", &b);
	printf("Введите коэффициент с. \n");
	scanf("%f", &c);

	int output;
	output = calc(a, b, c, &X1, &X2);
	switch (output) {
		case 0: 
			printf("Ур-е линейное или его корни совпадают, Х = %f.", X1);
			break;
		case 1:
			printf("Ур-е имеет два действительных корня: Х1 = %f, Х2 = %f.", X1, X2);
			break;
		case -1:
			printf("Ур-е не имеет действительных корней.");
			break;
	}
	printf("\n");

}

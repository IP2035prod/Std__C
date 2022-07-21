/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>



int main()
{
    float input[10];
    int i, j;
    float sum = 0;
    float out;
    	for (i=0; i<10; i++)
    	{
    	    j = i + 1; //j - адрес ячейки массива для записи в консоли.
            printf("Введите %d число.\n", j); //прим: Для ячейки массива с индексом 0 будет запись "введите 1 число" и т.д.
            scanf("%f", &input[i]);
    	}
        printf("Введены числа: ");
    	for (i=0; i<10; i++) //вывод элементов на экран и суммирование.
    	{
        	printf ("%f ", input[i]);
        	sum = sum + input[i];
    	}
    	out = sum / 10;
    	printf ("\nСреднее арифметическое %f", out);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int sum (int a, int b) // функция вычисления суммы 
{
    int c = a + b;  
	return c;  
}

int dif (int a, int b) // функция вычисления разности 
{
    int c = a - b;  
	return c;  
}

int mult (int a, int b) // функция вычисления произведения 
{
    int c = a * b; 
	return c;  
}

int div (int a, int b) // функция вычисления частного 
{
    int c = a / b;  
	return c;  
}

int test_sum (int a, int b) // тест функции суммы
{
	int c = sum(a, b);
    if (c = a + b)
    {
    	printf("Сумма работает верно\n"); 
    	return 0;
    }
    else 
    {
     	printf("Сумма работает неверно\n");
        return 0;
    }	
}

int test_dif (int a, int b) // тест функции разности
{
	int c = dif(a, b);
    if ((c = 0) || (c = a - b) || (a = b))
    {
    	printf("Разница работает верно\n"); 
    	return 0;
    }
       else
    {
    	printf("Разница работает неверно\n");
        return 0;
    }
}

int test_mult (int a, int b) // тест функции умножения
{
	int c = mult(a, b);
    if (c = a * b)
    {
    	printf("Умножение работает верно\n"); 
    	return 0;
    }
    else
    {
    	printf("Умножение работает неверно\n");
        return 0;
    }
}

int test_div (int a, int b) // тест функции деления
{
	int c = div(a, b);
    if ((b!=0) & (c = a / b))
    {
    	printf("Деление работает верно\n"); 
    	return 0;
    }
    else
    {
    	printf("Деление работает неверно\n");
        return 0;  
    }    
}


int main ()
{
	printf("Hello, World!\n");
	int a,b,c;
	printf("a= ");
	scanf("%d", &a); // ввод числа a
	printf("b= ");
	scanf("%d", &b); // ввод числа b
	c = sum(a, b); // вызов функции суммы
	printf("Сумма двух чисел %d\n", c);
	test_sum(a, b); // вызов теста функции суммы
	printf("a= ");
	scanf("%d", &a); // ввод числа a
	printf("b= ");
	scanf("%d", &b); // ввод числа b
	c = dif(a, b); // вызов функции разности
	printf("Разность двух чисел %d\n", c);
	test_dif(a, b); // вызов теста функции разности
	printf("a= ");
	scanf("%d", &a); // ввод числа a
	printf("b= ");
	scanf("%d", &b); // ввод числа b
	c = mult(a, b); // вызов функции произведения
	printf("Произведение двух чисел %d\n", c);
	test_mult(a, b); // вызов теста функции произведения
	printf("a= ");
	scanf("%d", &a); // ввод числа a
	printf("b= ");
	scanf("%d", &b); // ввод числа b
	if (b!=0)
	{
		c = div(a, b);
		printf("Деление двух чисел %d\n", c); // вызов функции деления, при делителе не равном нулю.
	}
	else
	{
		printf("Деление невозможно на 0\n"); // вывод сообщения о невозможности деления на ноль.
	}
	test_div(a, b);	// вызов теста функции деления
	return 0;
}
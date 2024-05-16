// Лабораторная работа 2
// Выполнили студенты группы 23ВВВ2
// Стрельцов А.П. , Герасимов В.Р.

#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, d, x1, x2, x3, x4, x5, x6, min;
	printf("Введите четыре целых числа: ");
	scanf_s(" %d %d %d %d", &a, &b, &c, &d);	

	x1 = abs(a - b);
	x2 = abs(a - c);
	x3 = abs(a - d);
	x4 = abs(b - c);
	x5 = abs(b - d);
	x6 = abs(c - d);

	if (x1 < x2 && x1 < x3 && x1 < x4 && x1 < x5 && x1 < x6) {min = x1; printf("пара чисел: %d %d", a, b);}

	if (x2 < x1 && x2 < x3 && x2 < x4 && x2 < x5 && x2 < x6) {min = x2; printf("пара чисел: %d %d", a, c);}

	if (x3 < x1 && x3 < x2 && x3 < x4 && x4 < x5 && x3 < x6) {min = x3; printf("пара чисел: %d %d", a, d);}

	if (x4 < x1 && x4 < x2 && x4 < x3 && x4 < x5 && x4 < x6) {min = x4; printf("пара чисел: %d %d", b, c);}

	if (x5 < x1 && x5 < x2 && x5 < x3 && x5 < x4 && x5 < x6) {min = x5; printf("пара чисел: %d %d", b, d);}

	if (x6 < x1 && x6 < x2 && x6 < x3 && x6 < x4 && x6 < x5) {min = x6; printf("пара чисел: %d %d", c, d);}

	printf("\nминимальная по модулю разность: %d\n", min);
		
	return 0;
}
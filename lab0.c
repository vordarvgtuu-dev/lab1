#include <stdio.h>

void main()
{
	system("chcp 65001 > nul"); // не работает setlocale(LC_CTYPE, "RUS");
	puts("Hello Word! Привет мир!");
	puts("Нажмите Enter для продолжения...");

	getchar(); // ожидание нажатия Enter

	puts("Продолжение программы");

}
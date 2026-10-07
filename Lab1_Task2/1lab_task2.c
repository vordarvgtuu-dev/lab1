#include <stdio.h>
#include <windows.h> // не работает #include <locale.h>

int main() {
    system("chcp 65001 > nul"); // не работает setlocale(LC_CTYPE, "RUS");
    puts("***************************************************");
    puts("*                                                 *");
    puts("*   тема: Разработка консольного приложения       *");
    puts("*                                                 *");
    puts("*           Выполнила Воропаева Д. О.             *");
    puts("*                                                 *");
    puts("***************************************************");
    return 0;
}

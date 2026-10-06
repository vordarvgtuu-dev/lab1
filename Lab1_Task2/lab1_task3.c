#include <stdio.h>

int main() {
    system("chcp 65001 > nul"); // не работает setlocale(LC_CTYPE, "RUS");
    puts(" __   __        __             __   __ ");
    puts("|  | |  |      |  | |  |      |  | |  |");
    puts(" __|  __|      |  | |__|      |  | |__|");
    puts("|    |         |  |    |      |  | |  |");
    puts("|__  |__    .  |__|    |  .   |__| |__|");
    return 0;
}

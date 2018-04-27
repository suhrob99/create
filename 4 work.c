#include <stdio.h>
int bitt(int num, int bit);
int main(void)
{
    int num, bit;
    puts("Введите  integer: ");
    scanf("%d", &num);
    puts("Введите бит который желаете чекнуть: ");
    scanf("%d", &bit);
    printf("%d\r\n", bitt(num, bit));
    return 0;
}
int bitt(int num, int bit)
{
    int mask = 1;
    mask <<= bit;
    return(num & mask);
}
/* Programa feito por Natan Moraes(123matheusmoraes321@gmail.com)
 * Desc: Imprime olá mundo e cornometra o tempo de execução do programa
 * em milisegundos
 */
#include <stdio.h>
#include <time.h>

int i;

int main(void)
{
    clock_t Ticks[2];
    Ticks[0] = clock();
    printf("olá, mundo\n");
    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto: %g ms.", Tempo);
    getchar();
    return 0;
}

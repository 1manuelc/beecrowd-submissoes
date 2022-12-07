#include <stdio.h>
#include <stdlib.h>

int main() {
    int valorA, valorB, valorC, valorD;
    scanf("%d%d%d%d", &valorA, &valorB, &valorC, &valorD);

    if(valorB > valorC && valorD > valorA && valorC + valorD > valorA + valorB && valorC > 0 && valorD > 0 && valorA % 2 == 0)
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");

    system("pause");
    return 0;
}
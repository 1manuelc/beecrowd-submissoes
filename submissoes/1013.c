#include <stdio.h>
#include <stdlib.h>

int main() {
    int valorA, valorB, valorC;
    int maior_ab, maior;
    scanf("%d%d%d", &valorA, &valorB, &valorC);

    maior_ab = (valorA + valorB + abs(valorA - valorB)) / 2;
    maior = (maior_ab > valorC) ? maior_ab : valorC;

    printf("%d eh o maior\n", maior);
    return 0;
}
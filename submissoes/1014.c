#include <stdio.h>

int main() {
    int distanciaPercorrida;
    float combustivelGasto;
    float consumoMedio;

    scanf("%d", &distanciaPercorrida);
    scanf("%f", &combustivelGasto);

    consumoMedio = distanciaPercorrida / combustivelGasto;

    printf("%.3f km/l\n", consumoMedio);

    return 0;
}
#include <stdio.h>
#define PI 3.14159

int main() {
    double valorA, valorB, valorC;
    double areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;
    scanf("%lf%lf%lf", &valorA, &valorB, &valorC);

    areaTriangulo = valorA * valorC / 2.0; // a = b * h / 2.0
    areaCirculo = PI * (valorC * valorC); // a = pi * r²
    areaTrapezio = ((valorA + valorB) * valorC) / 2.0; // a = ((B + b) * h) / 2.0
    areaQuadrado = valorB * valorB; // a = l²
    areaRetangulo = valorA * valorB; // a = b * h

    printf("TRIANGULO: %.3lf\n", areaTriangulo);
    printf("CIRCULO: %.3lf\n", areaCirculo);
    printf("TRAPEZIO: %.3lf\n", areaTrapezio);
    printf("QUADRADO: %.3lf\n", areaQuadrado);
    printf("RETANGULO: %.3lf\n", areaRetangulo);
    
    return 0;
}
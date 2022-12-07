#include<stdio.h>
#include <stdlib.h>

int main() {
    double valor;
    int notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0;
    int moedas1 = 0, moedas50 = 0, moedas25 = 0, moedas10 = 0, moedas5 = 0, moedas01 = 0;

    scanf("%lf", &valor);
    valor = valor * 100;

    while(valor >= 10000.0) {
        valor -= 10000;
        notas100++;
    }

    while(valor >= 5000.0) {
        valor -= 5000;
        notas50++;
    }

    while(valor >= 2000.0) {
        valor -= 2000;
        notas20++;
    }

    while(valor >= 1000.0) {
        valor -= 1000;
        notas10++;
    }

    while(valor >= 500.0) {
        valor -= 500;
        notas5++;
    }

    while(valor >= 200.0) {
        valor -= 200;
        notas2++;
    }

    while(valor >= 100.0) {
        valor -= 100;
        moedas1++;
    }

    while(valor >= 50) {
        valor -= 50;
        moedas50++;
    }

    while(valor >= 25) {
        valor -= 25;
        moedas25++;
    }

    while(valor >= 10) {
        valor -= 10;
        moedas10++;
    }

    while(valor >= 5) {
        valor -= 5;
        moedas5++;
    }

    while(valor >= 1) {
        valor -= 1;
        moedas01++;
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas100);
    printf("%d nota(s) de R$ 50.00\n", notas50);
    printf("%d nota(s) de R$ 20.00\n", notas20);
    printf("%d nota(s) de R$ 10.00\n", notas10);
    printf("%d nota(s) de R$ 5.00\n", notas5);
    printf("%d nota(s) de R$ 2.00\n", notas2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas1);
    printf("%d moeda(s) de R$ 0.50\n", moedas50);
    printf("%d moeda(s) de R$ 0.25\n", moedas25);
    printf("%d moeda(s) de R$ 0.10\n", moedas10);
    printf("%d moeda(s) de R$ 0.05\n", moedas5);
    printf("%d moeda(s) de R$ 0.01\n", moedas01);

    system("pause");
    return 0;
}
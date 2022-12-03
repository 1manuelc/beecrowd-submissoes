#include <stdio.h>
#include <stdlib.h>

int main() {
    int diasTotais, anos = 0, meses = 0, dias = 0, contador = 0;
    scanf("%d", &diasTotais);
    contador = diasTotais;

    while(contador >= 365) {
        contador -= 365;
        anos++;
    }

    while(contador >= 30) {
        contador -= 30;
        meses++;
    }

    dias = contador;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    
    system("pause");
    return 0;
}
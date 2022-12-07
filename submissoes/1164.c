#include <stdio.h>
#include <stdlib.h>

int main() {
    int qtdTestes, contSoma;
    scanf("%d", &qtdTestes);

    int valores[qtdTestes];
    for(int i = 0; i < qtdTestes; i++)
        scanf("%d", &valores[i]);

    for(int i = 0; i < qtdTestes; i++) {
        contSoma = 0;

        for(int j = 1; j < valores[i]; j++) {
            if(valores[i] % j == 0)
                contSoma += j;
        }

        if(contSoma == valores[i])
            printf("%d eh perfeito\n", valores[i]);
        else
            printf("%d nao eh perfeito\n", valores[i]);

    }
    system("pause");
    return 0;
}
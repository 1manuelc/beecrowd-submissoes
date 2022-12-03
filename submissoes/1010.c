#include <stdio.h>

int main() {
    int numPeca1, numPeca2;
    double valorUnPeca1, valorUnPeca2, total;

    scanf("%*d%d%lf", &numPeca1, &valorUnPeca1);
    scanf("%*d%d%lf", &numPeca2, &valorUnPeca2);

    total = (numPeca1 * valorUnPeca1) + (numPeca2 * valorUnPeca2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
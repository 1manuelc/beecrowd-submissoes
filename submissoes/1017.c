#include <stdio.h>
#include <stdlib.h>

int main() {
    int horas, velMedia;
    scanf("%d%d", &horas, &velMedia);

    printf("%.3f\n", (horas * velMedia) / 12.0);

    system("pause");
    return 0;
}
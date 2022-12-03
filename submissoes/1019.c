#include <stdio.h>
#include <stdlib.h>

int main() {
    int segundos;
    scanf("%d", &segundos);
    if(segundos < 60)
        printf("0:0:%d\n", segundos);
    if(segundos > 59 && segundos < 3600)
        printf("0:%d:%d\n", (segundos / 60), (segundos % 60));
    if(segundos > 3599)
        printf("%d:%d:%d\n", (segundos / 3600), ((segundos / 60) % 60), (segundos % 60));
    system("pause");
    return 0;
}
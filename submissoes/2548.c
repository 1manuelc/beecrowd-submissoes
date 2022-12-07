#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    while(scanf("%d%d", &n, &m) != EOF) {
        int obras[n], maior = 0;
        for(int i = 0; i < n; i++) {
            scanf("%d", &obras[i]);
        }
        for(int i = 0; i < n; i++) {
            if(i >= n - m)
                maior += obras[i];
        }
        printf("%d\n", maior);
    }

    system("pause");
    return 0;
}
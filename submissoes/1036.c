#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c;
    // delta = b² - 4ac
    // (-b +/- sqrt(delta))/2a

    scanf("%lf%lf%lf", &a, &b, &c);

    double delta = pow(b,2) - 4 * a * c;

    if(a == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        double r1 = ((-b) + sqrt(delta)) / (2.0 * a);
        double r2 = ((-b) - sqrt(delta)) / (2.0 * a);
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }

    system("pause");
    return 0;
}
#include <stdio.h>

int main() {
    int a = 1;
    double d = 1.0;

    a = 46 % 9 + 4 * 4 - 2;
    printf("El valor de a es: %d\n", a);

    a = 45 + 43 % 5 * (23 * 3 % 2);
    printf("El valor de a es: %d\n", a);

    a = 45 + 45 * 50 % (a--);
    printf("El valor de a es: %d\n", a);

    d = 1.5 * 3 + (++d);
    printf("El valor de d es: %lf\n", d);

    d = 1.5 * 3 + (d++);
    printf("El valor de d es: %lf\n", d);

    a %= 3 / a + 3;
    printf("El valor de a es: %d\n", a);

    return 0;
}

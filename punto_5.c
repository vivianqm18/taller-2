#include <stdio.h>

int main() {
    double r, a, b, c, d;
    double resultado;

    printf("Ingrese el valor de r: ");
    scanf("%lf", &r);

    printf("Ingrese el valor de a: ");
    scanf("%lf", &a);

    printf("Ingrese el valor de b: ");
    scanf("%lf", &b);

    printf("Ingrese el valor de c: ");
    scanf("%lf", &c);

    printf("Ingrese el valor de d: ");
    scanf("%lf", &d);

    resultado = (4 / (3 * (r + 34))) - (9 * (a + b * c)) + ((3 + d * (2 + a)) / (a + b * d));

    printf("El resultado de la expresion es: %lf\n", resultado);

    return 0;
}

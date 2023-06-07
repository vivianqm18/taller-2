#include <stdio.h>
#include <math.h>

int main() {
    float lado1, lado2, angulo, area;

    printf("Ingrese el valor del lado 1: ");
    scanf("%f", &lado1);

    printf("Ingrese el valor del lado 2: ");
    scanf("%f", &lado2);

    printf("Ingrese el valor del ángulo entre los lados (en radianes): ");
    scanf("%f", &angulo);

    area = 0.5 * lado1 * lado2 * sin(angulo);

    printf("El área del triángulo es: %.2f\n", area);

    return 0;
}

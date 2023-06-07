#include <stdio.h>
#include <math.h>

int main() {
    double lado1, lado2, angulo;
    double area;

    // Solicitar los datos al usuario
    printf("Ingrese el primer lado del triángulo: ");
    scanf("%lf", &lado1);
    printf("Ingrese el segundo lado del triángulo: ");
    scanf("%lf", &lado2);
    printf("Ingrese el ángulo entre los dos lados (en grados): ");
    scanf("%lf", &angulo);

    // Convertir el ángulo de grados a radianes
    double angulo_radianes = angulo * M_PI / 180.0;

    // Calcular el área del triángulo
    area = 0.5 * lado1 * lado2 * sin(angulo_radianes);

    // Mostrar el resultado
    printf("El área del triángulo es: %lf\n", area);

    return 0;
}

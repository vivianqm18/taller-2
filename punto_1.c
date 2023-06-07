#include <stdio.h>
#include <math.h>

int main() {
    double radio = 14.5;
    double altura = 26.79;
    double volumen;

    volumen = (3.14 * pow(radio, 2) * altura) / 3;

    printf("El volumen del cono es: %lf\n", volumen);

    return 0;
}

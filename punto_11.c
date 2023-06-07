#include <stdio.h>
#include <math.h>

int main() {
    float capital, interes_anual, cuota_mensual, total_pagado, amortizacion, interes;
    int anios, meses;

    printf("Ingrese el capital prestado: ");
    scanf("%f", &capital);

    printf("Ingrese el interés anual: ");
    scanf("%f", &interes_anual);

    printf("Ingrese el número de años del préstamo: ");
    scanf("%d", &anios);

    meses = anios * 12;
    float ratio = interes_anual / (12 * 100);

    cuota_mensual = (capital * ratio * pow(1 + ratio, meses)) / (pow(1 + ratio, meses) - 1);
    total_pagado = cuota_mensual * meses;
    amortizacion = capital;
    interes = 0;

    printf("\nCuota mensual: %.2f\n", cuota_mensual);
    printf("Total pagado al finalizar el plazo: %.2f\n\n", total_pagado);

    printf("Detalle de pagos:\n");
    printf("Mes\tAmortización\tIntereses\t\tSaldo pendiente\n");

    for (int i = 1; i <= meses; i++) {
        interes = amortizacion * ratio;
        amortizacion = cuota_mensual - interes;
        capital -= amortizacion;

        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", i, amortizacion, interes, capital);
    }

    return 0;
}

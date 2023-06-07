#include <stdio.h>

int main() {
    float sueldo_base, complemento_destino, complemento_cargo_academico;
    int horas_extra, hijos, mayores_dependientes;
    float sueldo_bruto, impuestos, retencion_irpf, sueldo_neto;

    // Solicitar los datos al usuario
    printf("Sueldo base: ");
    scanf("%f", &sueldo_base);
    printf("Complemento de destino: ");
    scanf("%f", &complemento_destino);
    printf("Complemento de cargo académico: ");
    scanf("%f", &complemento_cargo_academico);
    printf("Horas extra realizadas: ");
    scanf("%d", &horas_extra);
    printf("Hijos: ");
    scanf("%d", &hijos);
    printf("Mayores: ");
    scanf("%d", &mayores_dependientes);

    // Calcular el sueldo bruto
    sueldo_bruto = sueldo_base + complemento_destino + complemento_cargo_academico + (23 * horas_extra);

    // Calcular los impuestos (IRPF)
    impuestos = 24;  // Porcentaje inicial sin hijos ni mayores dependientes
    impuestos -= 2 * hijos;  // Restar 2 puntos por cada hijo
    impuestos -= 1 * mayores_dependientes;  // Restar 1 punto por cada mayor dependiente
    retencion_irpf = (impuestos / 100) * sueldo_bruto;

    // Calcular el sueldo neto
    sueldo_neto = sueldo_bruto - retencion_irpf;

    // Mostrar los resultados
    printf("\nCálculo de la nómina:\n");
    printf("Sueldo base: %.2f $\n", sueldo_base);
    printf("Complemento de destino: %.2f $\n", complemento_destino);
    printf("Complemento de cargo académico: %.2f $\n", complemento_cargo_academico);
    printf("Horas extra realizadas: %d\n", horas_extra);
    printf("Hijos: %d\n", hijos);
    printf("Mayores: %d\n", mayores_dependientes);
    printf("Sueldo bruto: %.2f $\n", sueldo_bruto);
    printf("Porcentaje de IRPF: %.0f%%\n", impuestos);
    printf("Retención por IRPF: %.2f $\n", retencion_irpf);
    printf("Sueldo neto: %.2f $\n", sueldo_neto);

    return 0;
}

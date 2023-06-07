#include <stdio.h>

int main() {
    int segundos, horas, minutos, resto;

    printf("Ingrese el tiempo transcurrido en segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;  // 1 hora tiene 3600 segundos
    resto = segundos % 3600;
    minutos = resto / 60;  // 1 minuto tiene 60 segundos
    segundos = resto % 60;

    printf("Tiempo equivalente: %d horas, %d minutos, %d segundos\n", horas, minutos, segundos);

    return 0;
}

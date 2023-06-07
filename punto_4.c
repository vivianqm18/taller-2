#include <stdio.h>

int main() {
    float nota_examen1, nota_examen2, nota_examen_final;
    float nota_practica1, nota_practica2, nota_practica3;
    float nota_actividad_adicional;
    float nota_final;

    // Solicitar las calificaciones al usuario
    printf("Ingrese la calificación del primer examen: ");
    scanf("%f", &nota_examen1);
    printf("Ingrese la calificación del segundo examen: ");
    scanf("%f", &nota_examen2);
    printf("Ingrese la calificación del examen final: ");
    scanf("%f", &nota_examen_final);

    printf("Ingrese la calificación de la primera práctica: ");
    scanf("%f", &nota_practica1);
    printf("Ingrese la calificación de la segunda práctica: ");
    scanf("%f", &nota_practica2);
    printf("Ingrese la calificación de la tercera práctica: ");
    scanf("%f", &nota_practica3);

    printf("Ingrese la calificación de la actividad adicional: ");
    scanf("%f", &nota_actividad_adicional);

    // Calcular la nota final
    nota_final = nota_examen1 + nota_examen2 + nota_examen_final +
                 nota_practica1 + nota_practica2 + nota_practica3 +
                 nota_actividad_adicional;

    // Mostrar la nota final obtenida
    printf("\nLa nota final obtenida es: %.2f\n", nota_final);

    return 0;
}

/* ============================================================
 * bmi.c
 * Programa que calcula el Índice de Masa Corporal (IMC / BMI)
 * a partir del peso (kg) y la altura (m) ingresados por el
 * usuario, y muestra una tabla de referencia con las
 * distintas categorías de clasificación.
 *
 * Fórmula utilizada:
 *      IMC = peso (kg) / (altura (m))^2
 * ============================================================
 */

#include <stdio.h>

int main(void)
{
    float peso, altura, imc;

    /* Solicitud de datos al usuario */
    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    /* Cálculo del Índice de Masa Corporal */
    imc = peso / (altura * altura);

    /* Resultado */
    printf("Su indice de masa corporal es: %.2f\n", imc);
    printf("\n");

    /* Tabla de referencia */
    printf("    Indice    |  Condicion\n");
    printf("-----------------------------\n");
    printf("    <18.5     |  Bajo peso\n");
    printf(" 18.5 a 24.9  |  Normal\n");
    printf(" 25.0 a 29.9  |  Sobrepeso\n");
    printf("     >=30     |  Obesidad\n");

    return 0;
}

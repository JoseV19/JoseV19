#include <stdio.h>

int main() {
    // Definir tipos de cambio
    float tipoCambioDolar = 7.8;  // 1 USD a GTQ
    float tipoCambioEuro = 8.7;   // 1 EUR a GTQ

    // Variables para entrada y salida
    float cantidad;
    int opcion;

    // Menú de opciones
    printf("Bienvenido al conversor de monedas\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dólares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("5. Salir\n");

    // Solicitar opción al usuario
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    // Realizar la conversión según la opción seleccionada
    switch(opcion) {
        case 1:
            printf("Ingrese la cantidad en quetzales: ");
            scanf("%f", &cantidad);
            printf("%.2f GTQ son %.2f USD\n", cantidad, cantidad / tipoCambioDolar);
            break;
        case 2:
            printf("Ingrese la cantidad en quetzales: ");
            scanf("%f", &cantidad);
            printf("%.2f GTQ son %.2f EUR\n", cantidad, cantidad / tipoCambioEuro);
            break;
        case 3:
            printf("Ingrese la cantidad en dólares: ");
            scanf("%f", &cantidad);
            printf("%.2f USD son %.2f GTQ\n", cantidad, cantidad * tipoCambioDolar);
            break;
        case 4:
            printf("Ingrese la cantidad en euros: ");
            scanf("%f", &cantidad);
            printf("%.2f EUR son %.2f GTQ\n", cantidad, cantidad * tipoCambioEuro);
            break;
        case 5:
            printf("Gracias por usar el conversor de monedas. ¡Hasta luego!\n");
            break;
        default:
            printf("Opción no válida. Por favor, seleccione una opción del 1 al 5.\n");
    }

    return 0;
}
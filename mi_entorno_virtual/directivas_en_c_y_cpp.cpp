#include <iostream>

#define TASA 0.05
#ifndef FIN 
#define FIN 1000
#endif

#define NIVEL 4

int main() {
    printf("Tasa de interes: %.2f\n", TASA);
    #ifdef TASA
    #undef TASA
    printf("Tasa de interes redefiendose... ");
    #define TASA 0.10
    printf("Tasa de interes: %.2f\n", TASA);
    #else
    #define TASA 0.11
    printf("Tasa de interes: %.2f\n", TASA);
    #endif

    printf("Fin = %d, Tasa = %.2f\n", FIN, TASA);

    printf("Nivel = %d\n", NIVEL);

    #if NIVEL > 3
    printf("Nivel > 3\n");
    #elif NIVEL < 3
    printf("Nivel < 3\n");
    #elif NIVEL == 5
    printf("Nivel == 5\n");
    #else
    printf("Nivel = \n", NIVEL);
    #endif




    return 0;
}
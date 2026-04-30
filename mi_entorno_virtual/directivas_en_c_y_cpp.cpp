#include <iostream>
// Directivas de preprocesador en C y C++
//#include <stdlib.h>
#include <string.h>

#define TASA 0.05
#ifndef FIN 
#define FIN 1000
#endif

#define NIVEL 4


#define STR(t) #t// convierte el argumento en una cadena de texto

#define STRLEN(x) strlen(x) //agregar la libreria string.h 
                            //para usar la función strlen

#define V(a,b) a##b //concatena a y b
#define R(x) x*x  
#define RR(x) (x*x)  

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

    printf("prueba STR: %s\n", STR(123/12));
    printf("prueba STRLEN: %zu\n", STRLEN("Hola Mundo"));
    
    int aa = 10;
    int bb = 20;

    int V(aa,bb) = aa + bb; // define una función V  
                            //suma aa y bb
    printf("prueba V: %d\n", V(aa,bb)); // concatena aa y bb 
                                        //para formar aabb
    
    int r = 16/R(4);
    int rr = 16/RR(4);
    printf("prueba R: %d\n", r);   
    printf("prueba RR: %d\n", rr);   
    return 0;
}
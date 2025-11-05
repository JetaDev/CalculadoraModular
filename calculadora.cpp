#include "calculadora.h"
int sumar(int a, int b) { return a + b; }
int restar(int a, int b) { return a - b; }
int multiplicar(int a, int b) { return a * b; }
int dividir(int a, int b) { return (b != 0) ? a / b : 0; }
int potencia(int base, int exponente) {
    if (exponente < 0)
        return 0; // No manejamos potencias negativas (podrías cambiarlo si quisieras usar double)
    
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

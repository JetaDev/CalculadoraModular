/**
* @file calculadora.h
* @brief Declaraciones de funciones matemáticas básicas.
*/
#ifndef CALCULADORA_H
#define CALCULADORA_H
/**
* @brief Suma dos números enteros.
*/
int sumar(int a, int b);
/**
* @brief Resta dos números enteros.
*/
int restar(int a, int b);
/**
* @brief Multiplica dos números enteros.
*/
int multiplicar(int a, int b);
/**
* @brief Divide dos números enteros.
* @return Devuelve 0 si el divisor es 0.
*/
int dividir(int a, int b);
/**
* @brief Calcula la potencia de un número entero.
* @param base Número base.
* @param exponente Exponente (entero no negativo).
* @return El resultado de base elevado a exponente.
*/
int potencia(int base, int exponente);
#endif

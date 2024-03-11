/*
 ============================================================================
 Name        : prj_recursivo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// funcao recursiva padrão
int fatorialrecursivo(int n) {
	//caso base
	if (n == 0 || n == 1) {
		return 1;
	} else {
		//chamada recursiva
		return n * fatorialrecursivo(n - 1);
	}
}
//solucao iterativa
int fatorialcomloop(int n) {
	int resultado = 1;
	//utilizando um loop for para multiplicar os numeros de 1 a n
	for (int i = 1; i <= n; i++) {
		resultado *= i;
	}
	return resultado;
}
int main(void) {
	int numero = 5;
	printf("o fatorial de %d é %d\n", numero, fatorialrecursivo(numero)); //chamando a solucao recursiva
	return 0;
}

#ifndef PILA_H_
#define PILA_H_

#define TAM_PILA 340
#define MINIMO(x,y) ((x) <= (y) ? (x) : (y))

#include <string.h>

typedef struct
{
    char pila[TAM_PILA];
    unsigned tope;
}t_pila;

void crearPila(t_pila *pila);
int pilaLlena(t_pila *pila, unsigned cant_bytes);
int ponerEnPila(t_pila* pila, void* elemento, unsigned tam_elem);
int verTope(t_pila *pila, void* elemento, unsigned tam_elem);
int pilaVacia(t_pila* p);
void vaciarPila(t_pila* p);
int sacarDePila(t_pila *p, void* elemento, unsigned tam_elem);

#endif // PILA_H_

#include "pila.h"

void crearPila(t_pila *pila)
{
    pila->tope = TAM_PILA;
}

int pilaLlena(t_pila *pila, unsigned cant_bytes)
{
    return pila->tope < cant_bytes+sizeof(unsigned);
}

int ponerEnPila(t_pila* pila, void* elemento, unsigned tam_elem)
{
    if(pila->tope < tam_elem+sizeof(unsigned))
        return 0;

    pila->tope -= tam_elem;
    memcpy(pila->pila + pila->tope, elemento, tam_elem);
    pila->tope -= sizeof(unsigned);
    memcpy(pila->pila + pila->tope, &tam_elem, sizeof(unsigned));

    return 1;
}

int verTope(t_pila *pila, void* elemento, unsigned tam_elem)
{
    if(pila->tope == TAM_PILA)
        return 0;
    unsigned tam_tope;
    memcpy(&tam_tope, pila->pila + pila->tope, sizeof(unsigned));
    memcpy(elemento, pila->pila + pila->tope + sizeof(unsigned), MINIMO(tam_elem, tam_tope));
    return 1;
}

int pilaVacia(t_pila* p)
{
    return p->tope == TAM_PILA;
}

void vaciarPila(t_pila* p)
{
    p->tope = TAM_PILA;
}

int sacarDePila(t_pila *p, void* elemento, unsigned tam_elem)
{
    if(p->tope == TAM_PILA)
        return 0;
    unsigned tam_tope;
    memcpy(&tam_tope, p->pila + p->tope, sizeof(unsigned));
    p->tope += sizeof(unsigned);
    memcpy(elemento, p->pila + p->tope, MINIMO(tam_elem, tam_tope));
    p->tope += tam_tope;
    return 1;
}


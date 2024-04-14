#include "main.h"

void probarPonerYSacarDePila(void);

int main()
{
    probarPonerYSacarDePila();
    return 0;
}

void probarPonerYSacarDePila(void)
{
    t_producto producto;
    t_pila pila;

    crearPila(&pila);
    while(!pilaLlena(&pila, sizeof(t_producto)) && ingresarProducto(&producto))
    {
        if(!ponerEnPila(&pila, &producto, sizeof(t_producto)))
            puts("ERROR INESPERADO, MEMORIA LLENA\n");
    }

    t_producto otro;
    puts("Ver Tope De Pila---\n");
    if(verTope(&pila, &otro, sizeof(otro)))
        mostrarProducto(&otro);
    else
        puts("No hay Elementos");

//    if(pilaVacia(&pila))
//        puts("Pila Vacía");
//    else{
//        puts("VACIANDO PILA");
//        vaciarPila(&pila);
//    }
//
//

    while(sacarDePila(&pila, &otro, sizeof(otro)))
    {
        mostrarProducto(&otro);
    }

    if(pilaVacia(&pila))
        puts("Pila Vacía");

}



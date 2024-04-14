#include "productos.h"

void probarCargarYMostrarProductos()
{
    t_producto producto;
    printf("MOSTRAR PRODUCTOS...\n\n");

    mostrarProducto(NULL);

    for(int i = 0; productosCaso(&producto, i); i++)
        mostrarProducto(&producto);

    printf("\nPRODUCTOS MOSTRADOS...\n\n");
}

int productosCaso(t_producto *p, unsigned indice)
{
    static const t_producto productos[] = {
        {1,1},
        {2,2},
        {3,3},
        {4,4},
        {5,5},
        {6,6},
        {7,7},
        {8,8},
        {9,9},
        {10,10},
        {11,11},
        {12,12},
        {13,13}
    };

    if(indice >= (sizeof(productos)/sizeof(t_producto)))
        return 0;

    *p = productos[indice];
    return 1;
}

void mostrarProducto(t_producto *p)
{
    if(!p)
    {
        printf("Codigo\tCantidad\n");
        return;
    }

    printf("%d\t%d\n", p->codigo, p->cantidad);
}

#ifndef PRODUCTOS_H_INCLUDED
#define PRODUCTOS_H_INCLUDED

#include <stdio.h>

#define CANT_PROD 40

typedef struct
{
    unsigned codigo;
    unsigned cantidad;
}t_producto;

void probarCargarYMostrarProductos();
int productosCaso(t_producto *p, unsigned indice);
void mostrarProducto(t_producto *p);

#endif // PRODUCTOS_H_INCLUDED

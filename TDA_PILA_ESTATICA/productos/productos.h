#ifndef PRODUCTOS_H_
#define PRODUCTOS_H_

#include <stdio.h>

typedef struct
{
    char codProd[11];
    char descrip[46];
} t_producto;

void probarIngresarYMostrarProductos(void);

int ingresarProducto(t_producto *d);
void mostrarProducto(const t_producto *d);

#endif // PRODUCTOS_H_

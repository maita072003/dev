#include "productos.h"

void probarIngresarYMostrarProductos(void)
{
    t_producto  producto;
    int         cant = 0;

    puts("Probando Ingresar y Mostrar Productos\n"
         "======== ======== = ======= =========\n");
    if(ingresarProducto(&producto))
        mostrarProducto(NULL);
    do
    {
        mostrarProducto(&producto);
        cant++;
    }
    while(ingresarProducto(&producto));

    fprintf(stdout, "\nSe mostraron los %d productos...\n", cant);

}

int ingresarProducto(t_producto *d)
{
    static const t_producto productos[] =
    {
        {"tornillo12", "Tornillo galvanizado de 1/2 pulgada"},
        {"tuercaM6", "Tuerca hexagonal M6 de acero inoxidable"},
        {"arandelam", "Arandela plana de acero de 5 mm"},
        {"cable2m", "Cable eléctrico de 2 mm de sección tran"},
        {"tornilloM8", "Tornillo hexagonal M8 de 50 mm de longitud"},
        {"remache5mm", "Remache pop de 5 mm de diámetro"},
        {"MArande", "Arandela de presión M10 de acero inoxidable"},
        {"tornillo", "Tornillo autorroscante para pulgada"},
        {"clavo50mm", "Clavo de acero de 50 mm de longitud"},
        {"tuercaplas", "Tuerca de plástico para tornillos de nylon"}
    };

    static int posi = 0;

    if(posi == sizeof(productos)/sizeof(t_producto))
    {
        posi = 0;
        return 0;
    }
    *d = productos[posi];
    posi++;

    return 1;
}

void mostrarProducto(const t_producto *d)
{
    if(d)
    {
        fprintf(stdout,
                "%-*s %-*s ...\n",
                (int)sizeof(d->codProd) - 1, d->codProd,
                (int)sizeof(d->descrip) - 1, d->descrip);
    }
    else
    {
        fprintf(stdout,
                "%-*.*s %-*.*s ...\n",
                (int)sizeof(d->codProd) - 1, (int)sizeof(d->codProd) - 1, "Cod. Producto",
                (int)sizeof(d->descrip) - 1, (int)sizeof(d->descrip) - 1, "Descripción del Producto");
    }
}

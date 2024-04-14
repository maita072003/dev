#include "lineasDeTexto.h"

void probarIngresarYMostrarTexto(void)
{
    char linea[MAX];
    unsigned cant = 0;
    puts("Probando Ingresar Y Mostrar Texto\n"
         "======== ======== = ======= =====");
    if(ingresarTexto(linea, MAX))
        printf("texto...\n");
    do
    {
        printf("%s\n", linea);
        cant++;
    }
    while(ingresarTexto(linea, MAX));

    fprintf(stdout, "\nSe mostraron los %d textos...\n", cant);
}

int ingresarTexto(char* linea, int tamLinea)
{
    static const char *texto[MAX] = {
        "Hola, mundo!",
        "¿Cómo estás?",
        "¡Buen día!",
        "¡Buenas tardes!",
        "¡Buenas noches!",
        "¿En qué puedo ayudarte?",
        "Gracias por tu ayuda.",
        "Hasta pronto.",
        "Nos vemos luego.",
        "¡Hasta la vista!",
        "¡Feliz Navidad!",
        "¡Feliz Año Nuevo!",
        "¡Te quiero!",
        "¡Te extraño!",
        "¡Eres genial!",
        "¡Eres muy amable!",
        "¡Me alegra verte!",
        "¡Qué alegría verte!",
        "¡Qué gusto verte!",
        "¡Cuánto tiempo!",
        "¿Qué tal?",
        "¿Qué pasa?",
        "¿Qué novedades?",
        "¿Cómo te va?",
        "¿Cómo te fue?",
        "¿Cómo te sientes?",
        "¿Qué estás haciendo?",
        "¿Qué planes tienes?",
        "¿Qué te parece?",
        "¿De qué se trata?",
        "¿Me cuentas?",
        "¿Me ayudas?",
        "¿Por favor?",
        "¡Gracias!",
        "¡De nada!",
        "¡Lo siento!",
        "¡Perdón!",
        "¡Disculpa!",
        "¡No hay problema!",
        "¡Hasta luego!",
    };
    static int posi = 0;

    if(texto[posi] == NULL)
    {
        posi = 0;
        return 0;
    }

    *linea = '\0';
    strncat(linea, texto[posi], tamLinea-1);
    posi++;
    return 1;
}


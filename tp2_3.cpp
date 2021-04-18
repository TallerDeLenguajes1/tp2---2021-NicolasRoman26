#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
};

typedef struct compu PC;

void cargarPc (PC unaPc, int n, char tipos[6][10]);

int main()
{
    int cantidad;
    char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};
    
    printf("Ingrese la cantidad de Computadoras que va a cargar: ");
    scanf("%d",&cantidad);

    PC unaPc, *cantidadPc = (PC *)malloc(sizeof(PC) * cantidad);

    cargarPc (unaPc, cantidad, tipos);

    getchar();
    return 0;
}

void cargarPc (PC unaPc, int n, char tipos[6][10])
{
    srand (time(NULL));
    int i, velocidad, anio, cantidad;
    
    for (i = 0; i < n; i++)
    {
         velocidad = 1 + rand() % 2 + 1;
         anio = 2000 + rand() % 17 + 1;
         cantidad = 1 + rand() % 3 + 1;

         strcpy(unaPc.tipo_cpu = , tipos[2]);
         printf("%s", unaPc.tipo_cpu);
    }
    
}
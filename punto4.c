#include <stdio.h>
#include <stdlib.h>
#define N 5

struct compus
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipoCPU;
};

void mostrar(struct compus pcs[]);
void pcMasVieja(struct compus masVieja[]);
void pcMasRapida(struct compus MasRapida[]);

int main(int argc, char const *argv[])
{
    struct compus compus[N];
    int i;
    for (int i = 0; i < N; i++)
    {
        system("cls");
        printf("\nIngrese caraceteristica del la pc # %i\n\n", (i + 1));
        do
        {
            printf("Ingrese la velocidad del procesamiento en GHz\n");
            scanf("%i", &compus[i].velocidad);
            if (compus[i].velocidad < 1 || compus[i].velocidad > 3)
            {
                printf("La velocidad de procesamiento debe estar entre 1 y 3 \n");
            }

        } while (compus[i].velocidad < 1 || compus[i].velocidad > 3);

        do
        {
            printf("Ingrese  el anio de fabricacion\n");
            scanf("%i", &compus[i].anio);
            if (compus[i].anio < 2015 || compus[i].velocidad > 2023)
            {
                printf("El anio de fabricacion debe estar entre 2015 y 2023 \n");
            }

        } while (compus[i].anio < 2015 || compus[i].anio > 2023);

        do
        {
            printf("Ingrese la cantidad de nucleos de la pc\n");
            scanf("%i", &compus[i].cantidad);
            if (compus[i].cantidad < 1 || compus[i].cantidad > 8)
            {
                printf("La cantidad de nucleos debe estar entre 1 y 8 \n");
            }

        } while (compus[i].cantidad < 1 || compus[i].cantidad > 8);

        fflush(stdin);
        printf("Ingrese el tipo de cpu\n");
        scanf("%s[^\n]", &compus[i].tipoCPU);
    }

    mostrar(compus);
    pcMasVieja(compus);
    pcMasRapida(compus);
    return 0 ;
}

void mostrar(struct compus pcs[])
{

    printf("Lista de PCs \n");
    for (int i = 0; i < N; i++)
    {
        printf("\n pc #%i" , (i+1));
        printf("\n velodicadad de procesamiento en GHz: %i", pcs[i].velocidad);
        printf("\n anio de fabricacion: %i", pcs[i].anio);
        printf("\n cantidad de nucleos: %i", pcs[i].cantidad);
        printf("\n Tipo de procesador: %c", pcs[i].tipoCPU);
    }
}
void pcMasVieja(struct compus masVieja[])
{

    struct compus vieja;
    vieja = masVieja[0];

    for (int i = 0; i < N; i++)
    {
        if (vieja.anio < masVieja[i].anio)
        {
            vieja = masVieja[i];
        }
    }

    printf("\n La pc mas antigua es:\n");
    printf("\n velodicadad de procesamiento en GHz: %i", vieja.velocidad);
    printf("\n anio de fabricacion: %i", vieja.anio);
    printf("\n cantidad de nucleos: %i", vieja.cantidad);
    printf("\n Tipo de procesador: %c", vieja.tipoCPU);
}
void pcMasRapida(struct compus MasRapida[])
{
    struct compus rapida = MasRapida[0];

    for (int i = 0; i < N; i++)
    {
        if (rapida.velocidad > MasRapida[i].velocidad)
        {
            rapida = MasRapida[i];
        }
    }

    printf("\n La pc mas rapida es:\n");
    printf("\n velodicadad de procesamiento en GHz: %i", rapida.velocidad);
    printf("\n anio de fabricacion: %i", rapida.anio);
    printf("\n cantidad de nucleos: %i", rapida.cantidad);
    printf("\n Tipo de procesador: %c", rapida.tipoCPU);
}

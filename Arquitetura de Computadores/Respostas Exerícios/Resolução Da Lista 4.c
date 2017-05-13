#include<stdio.h>
#include<stdlib.h>
#define MAX 100

typedef struct
{
    string nome;
    int cpf
} Cliente;

typedef struct
{
    Cliente filaCliente[MAX];
    int t_fila;
} TFila;

void iniciar_fila(TFila* posic_fila)
{
    posic_fila->t_fila = 0;
}

void inserir(TFila* posic_fila, Cliente c1)
{
    if(posic_fila -> t_fila < 100)
    {
        c1 = posic_fila -> filaCliente[posic_fila->t_fila];
        posic_fila->t_fila = posic_fila -> t_fila + 1;
    }
    else
    {
        printf("A fila ta cheia!");
    }
}

Cliente removerElemento(TFila* posic_fila)
{
    Cliente x;
    Cliente x = posic_fila -> filaCliente[posic_fila->t_fila];
    if(posic_fila->t_fila>=0)
    {
        for(int i = 0; i<posic_fila->t_fila-1; i++)
        {
            posic_fila->filaCliente[i] = posic_fila->filaCliente[i+1];
        }
        posic_fila->t_fila = posic_fila_t_fila - 1;
    }
}
else
{
    printf("A fila ta vazia!");
}
return x;

int main()
{
    TFila fila;
    Cliente c1;

    inciarFila(&fila);
    enfileirar(&fila, c1);
    desenfileirar(&fila, c1);

}

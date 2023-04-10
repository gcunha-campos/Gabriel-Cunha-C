#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

struct lista
{
  int num;
  lista *prox;
};

struct gancho
{
  lista *primeiro;
};

gancho *cria(void)
{
  gancho *cabeca = (gancho *)malloc(sizeof(gancho));
  cabeca->primeiro = NULL;
  return cabeca;
}

void adiciona(gancho *cabeca, int n)
{
  lista *novo = (lista *)malloc(sizeof(lista));
  if (cabeca->primeiro == NULL)
  {
    cabeca->primeiro = novo;
    novo->num = n;
    novo->prox = NULL;
  }
  else
  {
    novo->prox = cabeca->primeiro;
    novo->num = n;
  }
}

int busca(gancho *cabeca, int n)
{
  lista *auxiliar = cabeca->primeiro;

  while (auxiliar != NULL)
    {
      if (auxiliar->numero == n)
      {
        printf("Numero encontrado.\n");
        return n;
      }
      auxiliar = auxiliar->proximo;
    }
  printf("Parece que seu numero nao foi encontrado. Tente novamente com outro numero.\n");
  return -1;
}

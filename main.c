#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

int main(void) {
  gancho *cabeca = cria();
  adiciona(cabeca, 10);
  busca(cabeca, 5);
}
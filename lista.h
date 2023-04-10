#ifndef FUNCOES_H
#define FUNCOES_H

typedef struct lista lista;
typedef struct gancho gancho;

gancho *cria(void);
void adiciona(gancho *cabeca, int n);
int busca(gancho *cabeca, int n);

#endif
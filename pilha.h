#ifndef PILHA_H_
#define PILHA_H_

#include <stdio.h>

#define MAX 100

typedef struct pilha {
	char elementos[MAX];
	int topo;
} Pilha;

Pilha create(); //cria pilha
char pop(Pilha *p); //desempilha
void push(Pilha *p, char c); //empilha
int isEmpty(Pilha p); //verifica pilha vazia
int isFull(Pilha p); //verifica pilha cheia
int size(Pilha p); //verifica tamanho da pilha

#endif
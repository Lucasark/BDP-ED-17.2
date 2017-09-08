#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha create(){
	Pilha p;
	p.topo = -1;
	p.elementos[MAX];
}

int isFull(Pilha p){
	if (p.topo == (p.elementos[p.topo]))
		return 1;
	else
		return 0;
}

char pop(Pilha *p){
	char c = p.elementos[p.topo];
	p.topo--;
	return c;
}

void push(Pilha *p, char c){
	if (isFull(p))
		return;
	else{
		p.topo++;
		char c = p.elementos[p.topo];
		return c;
	}
}
int isEmpty(Pilha p){
	if (p.topo == -1)
		return 1;
	else
		return 0;

}

int size(Pilha p){
	int tam;
	tam = p.topo; + 1;
	return tam;
}

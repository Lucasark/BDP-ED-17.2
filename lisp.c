#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

int main(){
	int QtCar, idx, lvl;
	char charlvl[10];

	printf("Quantidade de caracteres:\n");
	scanf("%d",&QtCar);

	char Fr[QtCar];
	printf("Frase:\n");
	scanf("%s",Fr);

	printf("Verificar caracter no nivel?\n");
	scanf("%d",&idx);

	Pilha lisp = create();

	for(int i=0; i<QtCar;i++){
		if (Fr[i] == '(')
			push(&lisp, Fr[i]);
		if (Fr[i] == ')'){
			if (isEmpty(lisp)){
				printf ("A lista nao esta balanceada");
				break;
			}
			else
				pop(&lisp);
		}
		if (idx == 1){
			lvl = size(lisp);
			charlvl[1] = Fr[i];
		}
		else
			idx--;
    }
	if (isEmpty(lisp))
		printf ("A lista está balanceada! %s está no lvl %d",charlvl[1],lvl);
	else
		printf ("A lista nao esta balanceada");
}

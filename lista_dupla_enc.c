#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lista_dupla_enc.h"

struct NoDe{
	
	int info;
	TNoDe *prox;
	TNoDe *ant;
	
};

TNoDe* criar(int v){
	
	TNoDe *ptno = (TNoDe *)malloc(sizeof(TNoDe));
	ptno->info = v;
	ptno->prox = NULL;
	ptno->ant = NULL;
	
	return ptno;
	
}

int tamanho(TNoDe *l){
	
	if(l == NULL){
		
		return -1;
		
	}
	
	TNoDe *ptaux = l->prox;
	int n = 0;
	while(ptaux != NULL){
		
		n = n + 1;
		ptaux = ptaux->prox;
		
	}
	
	return n;
	
}

void inserir(TNoDe *l, int v){
	
	if(l == NULL){
		
		return;
		
	}
	
	TNoDe *ptaux = l;
	
	while(ptaux->prox != NULL){
		
		ptaux = ptaux->prox;

	}
	
	TNoDe *ptnovo = criar(v);
	ptaux->prox = ptnovo;
	ptnovo->ant = ptaux;
	
}

void remover(TNoDe *l, int v){
	
	if(l == NULL){
		
		return;
		
	}
	
	TNoDe *ptaux = l->prox;
	
	while(ptaux != NULL){
		
		if(ptaux->info == v && ptaux->prox != NULL){
			
			ptaux->ant->prox = ptaux->prox;
			ptaux->prox->ant = ptaux->ant;
			return;
			
		} else if(ptaux->info == v && ptaux->prox == NULL){
			
			ptaux->ant->prox = ptaux->prox;
			return;
			
		}else{
			
			ptaux = ptaux->prox;
			
		}
				
	}
	
}

TNoDe* buscar(TNoDe *l, int v){
	
	if(l == NULL){
		
		return NULL;
		
	}
	
	TNoDe *ptaux = l->prox;
	
	while(ptaux != NULL){
		
		if(ptaux->info == v){
			
			return ptaux;
			
		} else{
			
			ptaux = ptaux->prox;
			
		}
		
		
	}
	
	return NULL;
}

void exibeno(TNoDe *l){
	
	printf("%d", l->info);
	
}

void exibir(TNoDe *l){
	
	if(l == NULL){
		
		return;
		
	}
	
	TNoDe *ptaux = l->prox;
	
	while(ptaux != NULL){
		
		printf("%d\n", ptaux->info);
		ptaux = ptaux->prox;
		
	}
	
}

//Extras

void inserirnoini(TNoDe *l, int v){
	
	if(l == NULL){
		
		return;
		
	}
	
	TNoDe *ptnovo = criar(v);
	ptnovo->prox = l->prox;
	
	if(l->prox != NULL){
		
		l->prox->ant = ptnovo;
	}
	
	l->prox = ptnovo;
	ptnovo->ant = l;
	
}

TNoDe* removerdoini(TNoDe *l){
	
	if(l == NULL){
		
		return;
		
	}
	
	TNoDe *rem = l->prox;
	if(rem != NULL){
		
		l->prox = rem->prox;
	}
	
	if(l->prox != NULL){
		
		l->prox->ant = l;
	}
	
	return rem;
	
}

void exibirinvertido(TNoDe *l){
	
	if(l == NULL){
		
		return;
		
	}
	
	TNoDe *ptaux = l;
	
	while(ptaux->prox != NULL){
		
		ptaux = ptaux->prox;

	}
	
	while(ptaux != l){
		
		printf("%d\n", ptaux->info);
		ptaux = ptaux->ant;
		
	}
	
}

void concatenar(TNoDe *l1, TNoDe *l2){
	
	if(l1 == NULL || l2 == NULL){
		
		return;
		
	}
	
	TNoDe *ptaux = l1;
	
	while(ptaux->prox != NULL){
		
		ptaux = ptaux->prox;

	}
	
	ptaux->prox = l2->prox;
	
	if(l2->prox != NULL){
		
		l2->prox->ant = ptaux;
		
	}
	
}

void remover_pos(TNoDe *l, int p){
	
	if(l == NULL){
		
		return;
		
	}
	
	TNoDe *ptaux = l;
	TNoDe *ptrem = l->prox;
	
	int pos = 1;
	
	while(pos != p){
		
		pos = pos + 1;
		ptaux = ptaux->prox;
		ptrem = ptaux->prox;
		
	}
	
	ptaux->prox = ptrem->prox;
		
}

void tornar_circular(TNoDe *l){
	
	TNoDe *ptsent = l;
	TNoDe *ptaux = l->prox;
	
	while(ptaux->prox != NULL){
		
		ptaux = ptaux->prox;
		
	}
	
	ptaux->prox = ptsent->prox;
	ptsent->ant = ptaux->prox;
		
}


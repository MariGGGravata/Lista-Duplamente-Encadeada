#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lista_dupla_enc.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	TNoDe *ptl = criar(-1);
	
	/*
	printf("%d", tamanho(ptl));
	printf("\n-------------\n");
	
	
	inserir(ptl, 10);
	inserir(ptl, 30);
	inserir(ptl, 20);
	inserir(ptl, 15);
	*/
	/*
	exibir(ptl);
	
	printf("-------------\n");
	
	exibeno(buscar(ptl, 20));
	
	remover(ptl, 15);
	
	printf("\n-------------\n");
	exibir(ptl);
	
	inserir(ptl, 25);
	
	printf("\n-------------\n");
	exibir(ptl);
	
	inserirnoini(ptl, 5);
	
	printf("\n-------------\n");
	exibir(ptl);
	
	removerdoini(ptl);
	printf("\n-------------\n");
	exibir(ptl);
	
	printf("\n-------------\n");
	exibirinvertido(ptl);
	*/
	
	/*
	TNoDe *ptl1 = criar(-1);
	TNoDe *ptl2 = criar(-1);
	
	inserir(ptl1, 10);
	inserir(ptl1, 30);
	inserir(ptl1, 20);
	inserir(ptl1, 15);
	inserir(ptl2, 10);
	inserir(ptl2, 30);
	inserir(ptl2, 20);
	inserir(ptl2, 15);
	
	concatenar(ptl1, ptl2);
	
	printf("\n-------------\n");
	exibir(ptl1);
	printf("\n-------------\n");
	exibir(ptl2);
	*/
	/*
	printf("\n-------------\n");
	exibir(ptl);
	removerpos(ptl, 1);
	printf("\n-------------\n");
	exibir(ptl);
	*/
	
	/*
	TLista *l = criar;
	TNoDe *ptl = criar(-1);
	
	inserir(l, 10);
	inserir(l, 20);
	inserir(l, 30);
	inserir(l, 40);
	inserir(ptl2, 10);
	inserir(ptl2, 20);
	inserir(ptl2, 30);
	inserir(ptl2, 40);
	
	comparar_listas(ptl1, ptl2);
	*/
	
	inserir(ptl, 10);
	inserir(ptl, 20);
	inserir(ptl, 30);
	inserir(ptl, 40);
	//exibir(ptl);
	
	exibir(ptl);
	//tornar_circular(ptl);
	remover_pos(ptl, 2);
	exibir(ptl);
	
	
	return 0;
}

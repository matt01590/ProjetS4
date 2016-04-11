#include "hex.h"


void new_game(Pion pl[DIM][DIM]){
	int i, j;
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
			pl[i][j].Joueur = -1;
		}
	}
}



void switch_joueur(int *joueur){
	*joueur=(&joueur+1)%2;
	
	
}
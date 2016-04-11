#include "hex.h"


void new_game(Pion pl[DIM][DIM]){
	int i, j;
	for (i=0;i<DIM;i++){
		for (j=0;j<DIM;j++){
			pl[i][j].Joueur = -1;
		}
	}
}
Pion creer_pion(int joueur,int cpt){
Pion pi;
pi.Joueur=joueur;
pi.NoCoup=cpt;
return pi;

}
void ajouter_pion(Pion pl[DIM][DIM],Pion pi,int lig ,int col ,int *cpt){
	pl[lig][col]=pi;
	*cpt=*cpt+1;
}
void undo(Pion pl[DIM][DIM],int * cpt,int * joueur){
	int i=0, j=0, trouver=0;
	while (i<DIM && trouver ==0){
		while (j<DIM && trouver ==0 ){
			if (pl[i][j].NoCoup==*cpt)
				trouver =1;
			j++;
		}
	i++;
	}
}
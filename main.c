#include "hex.h"
 





int main(){

	/* Déclarations */
	printf("Kappa\n\n");
	Pion pl[DIM][DIM];
	Pion pi;
	new_game(pl);
	int cpt=0;
	int joueur=0;



	/* Commandes 
	//pl[11][11].Joueur=1;
	*/pi = creer_pion(joueur,cpt);/*
	ajouter_pion(pl,pi,11,11,&cpt);
	printf("%d\n",pl[1][1].Joueur);
	printf("%d\n",pl[11][11].Joueur);
	switch_joueur(&joueur);
	pi = creer_pion(joueur,cpt);
	ajouter_pion(pl,pi,8,9,&cpt);
	printf("Ajout pion\n");
	printf("Joueur = %d\n",pl[8][9].Joueur);
	undo(pl,&cpt,&joueur);
	printf("Undo\n");
	printf("Joueur = %d\n",pl[8][9].Joueur); */



	return 0;

}
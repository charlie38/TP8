#ifndef __JOUEURS_IN_H__
#define __JOUEURS_IN_H__
#include <stdio.h>
#include "joueurs_in.h"

void lire_les_joueurs(joueurs *ens, char *nom_fich){
	FILE *fich=fopen(nom_fich,"r");
	int card;
	char *nom;
	int billes;

	/* on lit la 1ère ligne (cardinal) et on met à jour ens */
	fscanf(fich,"%d\n",&card);
	ens->nb = card; 
	for (int i=0, i<card){ /* on lit le reste du fichier et on complète ens */
		fscanf(fich,"%s %d\n",&nom,&billes);
		strcpy(ens->T[i].pseudo,nom);
		ens->T[i].nb_billes;
	}
}
#endif

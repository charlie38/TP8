#include <string.h>
#include <stdio.h>
#include "joueurs.h"

void init_joueurs(joueurs *ens) {
/* (*ens).nb=0; */
ens->nb = 0; 
}

int ajouter_joueur(joueurs *ens, char *nom, int billes) {
strcpy(ens->T[ens->nb].pseudo,nom);
ens->T[ens->nb].nb_billes = billes;
ens->nb++;
return ens->nb-1;
}

int nombre_joueurs(joueurs *ens) {
return ens->nb;
}

int trouver_joueur(joueurs *ens, char *nom) {
int n=0;
while (strcmp(ens->T[n].pseudo,nom)!=0 && n<ens->nb) {
	n++;
}
if (strcmp(ens->T[n].pseudo,nom)==0){
	return n;
}else{	
	return -1;
}
}

char *nom_joueur(joueurs *ens, int i) {
if (i<ens->nb) {
	return ens->T[i].pseudo;
}else{
	return NULL;
}
}

int billes_joueur(joueurs *ens, int i) {
if (i<ens->nb) {
	return ens->T[i].nb_billes;
}else{
	return 0;
}
}

void modifier_billes(joueurs *ens, int i, int cpt) {
ens->T[i].nb_billes = cpt;
}

void afficher_ensemble_joueurs(joueurs *ens) {
int i ;
for (i=0 ; i<ens->nb ; i++) 
printf("%s %d\n", ens->T[i].pseudo, ens->T[i].nb_billes) ;
}

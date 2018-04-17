#include <stdio.h>
#include "joueurs.h"
#include "joueurs_out.h"

void ecrire_les_joueurs(joueurs *ens, char *nom_fich) {
  FILE *fich = fopen(nom_fich,"w");
  int cardinal = nombre_joueurs(ens);
  fprintf(fich, "%d\n",cardinal ); /* écrit le nombre de joueurs de l'ensemble sur la première ligne */
  int i=0;
  while (i<cardinal){ /* écrit sur chaque ligne un nom de joueur, espace, son nombre de billes */
    fprintf(fich, "%s %d\n",nom_joueur(ens,i),billes_joueur(ens,i));
    i++;
  }
  fclose(fich);
}


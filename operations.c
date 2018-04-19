#include <stdio.h>

#include "joueurs.h"
#include "operations.h"

int gain(joueurs *e) {
    char nom[TAILLE_MAX_NOM] ;
    int i, solde, depose ;

      printf("Nom du joueur et billes gagnées ? ") ;
      scanf("%s %d", nom, &depose) ;
      i = trouver_joueur(e, nom) ;
      if (i == -1) { 
          printf("Inconnu\n") ; return 1 ;
      }
      solde = billes_joueur(e, i) ;
      solde = solde + depose ;
      modifier_billes(e, i, solde) ;
      return 0 ;
  }
      
int perte(joueurs *e) {
    char nom[TAILLE_MAX_NOM] ;
    int i, solde, retire ;

      printf("Nom du joueur et billes perdues ? ") ;
      scanf("%s %d", nom, &retire) ;
      i = trouver_joueur(e, nom) ;
      if (i == -1) { 
          printf("Inconnu\n") ; return 1 ;
      }
      solde = billes_joueur(e, i) ;
      solde = solde - retire ;
      modifier_billes(e, i,solde) ;
      return 0 ;
  }


int transfert(joueurs *e) {
	char nom_debit[TAILLE_MAX_NOM] ;
	char nom_credit[TAILLE_MAX_NOM] ;
	int montant, i=0, solde ;

	/* Lecture du nom du joueur a debiter, du nom
	du joueur a crediter, et du montant du transfert. */
	printf("Nom du joueur à débiter - Nom du joueur à créditer - Montant du transfert ?\n") ;
	scanf("%s - %s - %d",nom_debit, nom_credit,&montant) ;

	/* Mise a jour des deux comptes.*/
	i = trouver_joueur(e, nom_debit) ;
	if (i == -1) { 
		printf("Inconnu\n") ; return 1 ;
	}
	solde = billes_joueur(e, i) ;
	solde = solde - montant ;
	modifier_billes(e, i,solde) ;

	i = trouver_joueur(e, nom_credit) ;
	if (i == -1) { 
		printf("Inconnu\n") ; return 1 ;
	}
	solde = billes_joueur(e, i) ;
	solde = solde + montant ;
	modifier_billes(e, i, solde) ;

	return -1 ;
  }

gestion : gestion.o operations.o joueurs_out.o joueurs_in.o joueurs.o
	clang -g gestion.o operations.o joueurs_out.o joueurs_in.o joueurs.o -o gestion

gestion.o : gestion.c operations.h joueurs_out.h joueurs_in.h
	clang -c gestion.c

operations.o : operations.c operations.h joueurs.h
	clang -c operations.c

billes : billes.o joueurs_out.o joueurs_in.o joueurs.o generer_entier.o
	clang -g billes.o joueurs_out.o joueurs_in.o joueurs.o generer_entier.o -o billes

billes.o : billes.c joueurs_out.h joueurs_in.h joueurs.h generer_entier.h
	clang -c billes.c

joueurs_out.o : joueurs_out.c joueurs_out.h joueurs.h
	clang -c joueurs_out.c

joueurs_in.o : joueurs_in.c joueurs_in.h joueurs.h
	clang -c joueurs_in.c

joueurs.o : joueurs.c joueurs.h
	clang -c joueurs.c

generer_entier.o : generer_entier.c
	clang -c generer_entier.c

billes : joueurs.o joueurs_in.o joueurs_out.o generer_entier.o billes.o 
	clang -g joueurs.o joueurs_out.o generer_entier.o billes.o -o billes

joueurs.o : joueurs.h joueurs.c
	clang -c joueurs.c

joueurs_in.o : joueurs_in.h joueurs_in.c
	clang -c joueurs_in.c

joueurs_out.o : joueurs.h joueurs_out.h joueurs_out.c
	clang -c joueurs_out.c

generer_entier.o : generer_entier.c generer_entier.h
	clang -c generer_entier.c

billes.o : billes.c generer_entier.h joueurs.h joueurs_in.h joueurs_out.h
	clang -c billes.c

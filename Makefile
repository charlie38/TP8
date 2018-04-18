billes : billes.o joueurs.o joueurs_out.o joueurs_in.o generer_entier.o
	clang -g joueurs.o joueurs_out.o joueurs_in.o generer_entier.o billes.o -o billes

billes.o : billes.c generer_entier.h joueurs.h joueurs_in.h joueurs_out.h
	clang -c billes.c

joueurs_out.o : joueurs_out.c joueurs.h joueurs_out.h 
	clang -c joueurs_out.c

joueurs_in.o : joueurs_in.c joueurs.h joueurs_in.h
	clang -c joueurs_in.c

joueurs.o : joueurs.c joueurs.h 
	clang -c joueurs.c

generer_entier.o : generer_entier.c generer_entier.h
	clang -c generer_entier.c

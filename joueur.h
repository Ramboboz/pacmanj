// joueur.h

#ifndef PACMAN_H_INCLUDED
#define PACMAN_H_INCLUDED

#include "plateau.h"
#include <windows.h>
#include <tchar.h>

struct joueur
{
	int x,y;
	int nb_pacgom;
	int nb_vies,nb_morts;
	int point;
	bool mange;
	int** pac;
	
	int supergom;
	bool cible;
	
	
};
typedef struct joueur joueur_t;

joueur_t* placer_j(int** pl);
void deplacer_j(int** pl, joueur_t* jou);
void update_j(int** pl,joueur_t* jou);
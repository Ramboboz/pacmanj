#include <stdio.h>
#include <stdlib.h>

#include "joueur.h"



joueur_t* placer_j(joueur_t *p,int x, int y, plateau_t* pl){
	int i,j;
	if(x>0 && y>0)
	{
		p->x=x;
		p->y=y;
		p->pac = malloc(pl->row*sizeof(int*));
		
		for(i=0;i<pl->row;i++)
		{
			p->pac[i] = malloc(pl->col * sizeof(int));
			for(j=0;j<pl->col;j++)
			{
				p->pac[i][j]=0;
			}
		}
	}
	pl->map[x][y]='J';
	p->nb_vies = 1;
	p->nb_morts = 0;
	p -> nb_pacgom = 0;
	
}

void deplacer_j(int** pl, joueur_t* jou){
}

void update_j(int** pl, joueur_t* jou){
}


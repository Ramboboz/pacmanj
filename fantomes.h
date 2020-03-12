// fantomes.h

#ifndef FANTOME_H_INCLUDED
#define FANTOME_H_INCLUDED



#include "plateau.h"
#define myrand(X)  (int)((double)rand()/((double)RAND_MAX +1)*X)

typedef struct
{
	int row,col;
	fantome** mem_Case;
	plateau_t memoire;
	
	
}fantome_t;


fantome_t** placer_n_f(fantome_t *g,plateau_t* pl, int n);

void deplacer_f(int** pl,fantome_t** fants);


#endif 
/* FANTOME_H_INCLUDED */
#include <stdio.h>
#include <stdlib.h>

#include "fantomes.h"

fantome_t** placer_n_f(fantome_t* ghost,plateau_t* pl,int n){
	
	int i=rand()%(*pl).row, j=rand()%(*pl).col;
	
	while(pl -> .map[i][j] != 2)
	{
		i = rand()%(*pl).row, j = rand()%(*pl).col;
	}
	g->mem_Case = pl->map[i][j];
	g->row = i;
	g->col = j;
	pl->map[i][j]='F';
	
}

void deplacer_f(int** pl, fantome_t **fants){
	int direction,deplacer_row,deplacer_col;
	bool test = false;
	
	while(!test)
	{
		sens = rand()%4;
		switch(direction)
		{
			case 0:
			{
				deplacer_col = 
}

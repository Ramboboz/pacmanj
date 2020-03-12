
#include "plateau.h"

#define P_SIZE
#define NB_ALEATOIRE_MAX 2


/* initialise un plateau vide et retourne 0 si action non effectuée*/

int** create_plateau(plateau_t *pl,int row, int col)
{
	int i,j;
	
	if(row>0 && col>0)
	{
		pl -> col = col;
		pl -> row = row;
		pl -> map = malloc(row * sizeof(int*));
		
		for(i=0 ; i<row ; i++)
		{
			pl -> map[i] = malloc(col * sizeof(int));
			
			for(j=0 ; j<col ; j++)
			{
				pl -> map[i][j]=0;
			}
		}
		return pl->map;
	}
	else
	{
		return 0;
	}
}
  

int valide(plateau_t* pl, int row, int col){
	
	for(int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			if (pl -> map[i][j] == 2)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
}
  


/* libère la mémoire allouée*/

void free_map(plateau_t *pl)
{
	int i;
	
	for(i=0 ; i < pl -> row ; i++)
	{
		free( pl -> map[i] );
		free( pl -> map );
	}
}

/*copie d'une matrice de nombres entiers */

void copy_map(plateau_t pl_1,plateau_t *pl_2)
{
	int i,j;
	create_plateau(pl_2,pl_1.row,pl_1.col);
	
	for(i=0 ; i<pl_1.row ; i++)
	{
		for(j=0 ; j<pl_1.col ; j++)
		{
			if(pl_1.map[i][j] == 2)
			{
				pl_2 -> map[i][j] = pl_1.map[i][j];
			}else{
				pl_2 -> map[i][j] =0;
			}
		}
	}
}


/* récupère les caractères présents dans une case */

int val_case(plateau_t *pl,int row, int col)
{
  return pl -> map[row][col];
}



/* crée les caractères présents dans la matrice : de façon aléatoire*/


int rand_nb(int n)
{
	int partSize = (n== RAND_MAX) ?   1 : 1 + (RAND_MAX - n)/(n+1);
	int maxUseful = partSize*n+(partSize-1);
	int draw;
	
	do
	{
		draw = rand();
	}while(draw>maxUseful);
	return draw/partSize;
}

void fulfill_plateau(plateau_t *p,int row, int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			p -> map[i][j]=rand_nb(NB_ALEATOIRE_MAX);
		}
	}
}


  









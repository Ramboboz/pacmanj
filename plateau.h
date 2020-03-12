// plateau.h

#ifndef PLATEAU_H
#define PLATEAU_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>

# define TAILLE_MAX 100


typedef struct
{
  int row;
  int col;
  int** map;
  int max_size;
  int nb_pacgom;
}plateau_t;



int** create_plateau(plateau_t *pl,int row,int col);

int valide(plateau_t* pl,int i,int j);
void free_map(plateau_t* pl);
void copy_map(plateau_t pl_1,plateau_t* pl_2);
int val_case(plateau_t* pl,int row, int col);
int random_nb(int n);
void fulfill_plateau(plateau_t *p,int row, int col);


#endif  // PLATEAU_H_INCLUDED



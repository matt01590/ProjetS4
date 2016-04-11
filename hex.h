#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
 
//#include <SDL2/SDL.h> // ce serait pour la SDL 2
#include <SDL/SDL.h>
#include <SDL/SDL_keysym.h>
#include <SDL_image.h>
#include <SDL_ttf.h>

typedef struct Pion_s{
	int Joueur;
	int NoCoup;
}Pion;

#define DIM 11

extern void new_game(Pion pl[DIM][DIM]);
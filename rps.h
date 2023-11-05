#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct _player *Player;

struct _player {
    char name[50];
    int wins;
    int losses;
    int ties;
};

//Returns 1 on success of save game and 0 on failure
//int saveGame(Player player);
int saveGame(Player player);

//Set a player variable to this function
//Handled by getOption
Player loadGame();

//Set a player to this function
//Handled by getOption
Player newGame();

//Just pass in a player pointer and it will print stats on that player
void printStats(Player player);

//While getOption returns null, call it again
Player getOption();

//Calls game function
int ChooseGame();

//Self explanitory
void freePlayer(Player player);

//GAMES
void celebRPS(Player currentPlayer);
void movieWeaponsRPS(Player currentPlayer);
void mediaToolsRPS(Player currentPlayer);
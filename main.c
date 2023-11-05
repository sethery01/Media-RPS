#include "rps.h"

int main(void)
{
    Player p = malloc(sizeof(Player));

    printf("\n=== Welcome to media based rock paper scissor ===!\n\n");
    printf("Please enter your one word name and press enter: ");
    scanf("%s" ,p->name);
    printf("Hello %s! Enjoy these three games!\n" ,p->name);

    celebRPS(p);
    movieWeaponsRPS(p);
    mediaToolsRPS(p);

    printf("=== Total score for %s ===\n" ,p->name);
    printf("Total ties: %d\nTotal wins: %d\nTotal losses: %d\n\n" ,p->ties ,p->wins ,p->losses);

    free(p);

    return 0;
}
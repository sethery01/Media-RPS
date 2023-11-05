#include "rps.h"

//CELEB VERSION
void celebRPS(Player currentPlayer)
{
    //game specific strings
    char a[50], b[50] ,c[50];
    strcpy(a,"\x1b[31mArnold Schwarzenegger\x1b[0m"); 
    strcpy(b,"\x1b[36mMorgan Freeman\x1b[0m"); 
    strcpy(c,"\x1b[32mGordon Ramsay\x1b[0m");
    
    int pChoice, cChoice, cWins = 0, cLosses = 0, pWins = 0, pLosses = 0, ties = 0, scanResult;

    printf("\n=== Welcome to Celebrity Rock Paper Scissors! === \n\n");
    while (1) {
        pChoice = -1;

        //user input
        while (pChoice < 1 || pChoice > 3) {
            printf("Please choose from the following numbers:\n"
                    "1 for %s, "
                    "2 for %s, "
                    "3 for %s, or 4 to quit.\n\n" ,a,b,c);
            scanResult = scanf("%d" ,&pChoice);
            if (scanResult != 1 || (pChoice < 1 || pChoice > 4)) {
                while (getchar() != '\n'); 
                printf("\nERROR: please choose either 1, 2, 3, or 4 and press enter.\n");
                pChoice = 0;
            }
            if (pChoice == 4) {
                break;
            }
        }
        if (pChoice == 4) break;
        printf("\n");
        
        //printing player input
        switch(pChoice) {
            case 1:
                printf("You picked %s!\n" ,a);
                break;
            case 2:
                printf("You picked %s!\n" ,b);
                break;
            case 3:
                printf("You picked %s!\n" ,c);
                break;
        }
        
        //computer input
        srand(time(NULL));
        cChoice = 1 + (rand() % 3);
        switch(cChoice) {
            case 1:
                printf("The computer picked %s!\n" ,a);
                break;
            case 2:
                printf("The computer picked %s!\n" ,b);
                break;
            case 3:
                printf("The computer picked %s!\n" ,c);
                break;
        }

        //game results
        if (pChoice == cChoice) {
            printf("\x1b[4mIt's a tie!\x1b[0m\n\n");
            ties++;
        }
        else if ((pChoice == 1 && cChoice == 3) || (pChoice == 2 && cChoice == 1) || (pChoice == 3 && cChoice == 2)) {
            
            switch(pChoice) {
                case 1:
                    printf("%s told %s to get to the chopper!\n" ,a,c);
                    break;
                case 2:
                    printf("%s narrated %s to sleep zzz...\n" ,b,a);
                    break;
                case 3:
                    printf("%s yelled at %s for his chicken being raw!\n" ,c,b);
                    break;
            }

            printf("\x1b[4mYou win!\x1b[0m\n\n");
            pWins++; cLosses++;
        }
        else {

            switch(cChoice) {
                case 1:
                    printf("%s told %s I'll be back!!\n" ,a,c);
                    break;
                case 2:
                    printf("%s explained the universe to %s and his brain exploded!\n" ,b,a);
                    break;
                case 3:
                    printf("%s made %s an Idiot Sandwich!\n" ,c,b);
                    break;
            }

            printf("\x1b[4mComputer wins!\x1b[0m\n\n");
            cWins++; pLosses++;
        }
    }

    //printing results
    printf("\nYour total wins: %d Computer's total wins: %d\n" ,pWins ,cWins);
    printf("Your total losses: %d Computer's total losses: %d\n" ,pLosses ,cLosses);
    printf("Total ties: %d\n" ,ties);
    printf("\nThanks for playing!\n\n");

    //updating player totals
    currentPlayer->wins += pWins;
    currentPlayer->losses += pLosses;
    currentPlayer->ties += ties;
    return;
}

//MOVIE WEAPONS VERSION
void movieWeaponsRPS(Player currentPlayer)
{
    //game specific strings
    char a[50], b[50] ,c[50];
    strcpy(a,"\x1b[32mThe Elder Wand\x1b[0m"); 
    strcpy(b,"\x1b[31mWalther PPK\x1b[0m"); 
    strcpy(c,"\x1b[36mLightsaber\x1b[0m");
    
    //integer variables
    int pChoice, cChoice, cWins = 0, cLosses = 0, pWins = 0, pLosses = 0, ties = 0, scanResult;

    //running the game
    printf("\n=== Welcome to Movie Weapon Rock Paper Scissors! === \n\n");
    while (1) {
        pChoice = -1;

        //user input
        while (pChoice < 1 || pChoice > 3) {
            printf("Please choose from the following numbers:\n"
                    "1 for %s, "
                    "2 for %s, "
                    "3 for %s, or 4 to quit.\n\n" ,a,b,c);
            scanResult = scanf("%d" ,&pChoice);
            if (scanResult != 1 || (pChoice < 1 || pChoice > 4)) {
                while (getchar() != '\n'); 
                printf("\nERROR: please choose either 1, 2, 3, or 4 and press enter.\n");
                pChoice = 0;
            }
            if (pChoice == 4) {
                break;
            }
        }
        if (pChoice == 4) break;
        printf("\n");
        
        //printing player input
        switch(pChoice) {
            case 1:
                printf("You picked %s!\n" ,a);
                break;
            case 2:
                printf("You picked %s!\n" ,b);
                break;
            case 3:
                printf("You picked %s!\n" ,c);
                break;
        }
        
        //computer input
        srand(time(NULL));
        cChoice = 1 + (rand() % 3);
        switch(cChoice) {
            case 1:
                printf("The computer picked %s!\n" ,a);
                break;
            case 2:
                printf("The computer picked %s!\n" ,b);
                break;
            case 3:
                printf("The computer picked %s!\n" ,c);
                break;
        }

        //game results
        if (pChoice == cChoice) {
            printf("\x1b[4mIt's a tie!\x1b[0m\n\n");
            ties++;
        }
        else if ((pChoice == 1 && cChoice == 3) || (pChoice == 2 && cChoice == 1) || (pChoice == 3 && cChoice == 2)) {
            
            switch(pChoice) {
                case 1:
                    printf("Voldemort casted Expelliarmus with %s to disarm Luke's %s!\n" ,a,c);
                    break;
                case 2:
                    printf("James Bond used the %s to shoot %s out of Voldemort's hand!\n" ,b,a);
                    break;
                case 3:
                    printf("Luke used his %s to deflect the shot from James Bond's %s!\n" ,c,b);
                    break;
            }

            printf("\x1b[4mYou win!\x1b[0m\n\n");
            pWins++; cLosses++;
        }
        else {

            switch(cChoice) {
                case 1:
                    printf("Dumbledore used %s to stupefy Luke and his %s!\n" ,a,c);
                    break;
                case 2:
                    printf("James Bond did a flip and used the %s to shoot %s!\n" ,b,a);
                    break;
                case 3:
                    printf("Luke used his %s to slice the barrel off of Bond's %s!\n" ,c,b);
                    break;
            }

            printf("\x1b[4mComputer wins!\x1b[0m\n\n");
            cWins++; pLosses++;
        }
    }

    //printing results
    printf("\nYour total wins: %d Computer's total wins: %d\n" ,pWins ,cWins);
    printf("Your total losses: %d Computer's total losses: %d\n" ,pLosses ,cLosses);
    printf("Total ties: %d\n" ,ties);
    printf("\nThanks for playing!\n\n");

    //updating player totals
    currentPlayer->wins += pWins;
    currentPlayer->losses += pLosses;
    currentPlayer->ties += ties;
    return;
}

//MEDIA TOOLS VERSION
void mediaToolsRPS(Player currentPlayer)
{
    //game specific strings
    char a[50], b[50] ,c[50];
    strcpy(a,"\x1b[31mcamera\x1b[0m"); 
    strcpy(b,"\x1b[32mnewspaper\x1b[0m"); 
    strcpy(c,"\x1b[36mclapperboard\x1b[0m");
    
    //integer variables
    int pChoice, cChoice, cWins = 0, cLosses = 0, pWins = 0, pLosses = 0, ties = 0, scanResult;

    //running the game
    printf("\n=== Welcome to Media Tools Rock Paper Scissors! === \n\n");
    while (1) {
        pChoice = -1;

        //user input
        while (pChoice < 1 || pChoice > 3) {
            printf("Please choose from the following numbers:\n"
                    "1 for %s, "
                    "2 for %s, "
                    "3 for %s, or 4 to quit.\n\n" ,a,b,c);
            scanResult = scanf("%d" ,&pChoice);
            if (scanResult != 1 || (pChoice < 1 || pChoice > 4)) {
                while (getchar() != '\n'); 
                printf("\nERROR: please choose either 1, 2, 3, or 4 and press enter.\n");
                pChoice = 0;
            }
            if (pChoice == 4) {
                break;
            }
        }
        if (pChoice == 4) break;
        printf("\n");
        
        //printing player input
        switch(pChoice) {
            case 1:
                printf("You picked %s!\n" ,a);
                break;
            case 2:
                printf("You picked %s!\n" ,b);
                break;
            case 3:
                printf("You picked %s!\n" ,c);
                break;
        }
        
        //computer input
        srand(time(NULL));
        cChoice = 1 + (rand() % 3);
        switch(cChoice) {
            case 1:
                printf("The computer picked %s!\n" ,a);
                break;
            case 2:
                printf("The computer picked %s!\n" ,b);
                break;
            case 3:
                printf("The computer picked %s!\n" ,c);
                break;
        }

        //game results
        if (pChoice == cChoice) {
            printf("\x1b[4mIt's a tie!\x1b[0m\n\n");
            ties++;
        }
        else if ((pChoice == 1 && cChoice == 3) || (pChoice == 2 && cChoice == 1) || (pChoice == 3 && cChoice == 2)) {
            
            switch(pChoice) {
                case 1:
                    printf("The %s fell and smashed the %s!\n" ,a,c);
                    break;
                case 2:
                    printf("The %s covered the %s lens!\n" ,b,a);
                    break;
                case 3:
                    printf("The %s cut the %s in two!\n" ,c,b);
                    break;
            }

            printf("\x1b[4mYou win!\x1b[0m\n\n");
            pWins++; cLosses++;
        }
        else {

            switch(cChoice) {
                case 1:
                    printf("The %s got tired of seeing the %s and stopped filming!\n" ,a,c);
                    break;
                case 2:
                    printf("The %s was more interesting than the %s!\n" ,b,a);
                    break;
                case 3:
                    printf("The %s went Pac Man on the %s!\n" ,c,b);
                    break;
            }

            printf("\x1b[4mComputer wins!\x1b[0m\n\n");
            cWins++; pLosses++;
        }
    }

    //printing results
    printf("\nYour total wins: %d Computer's total wins: %d\n" ,pWins ,cWins);
    printf("Your total losses: %d Computer's total losses: %d\n" ,pLosses ,cLosses);
    printf("Total ties: %d\n" ,ties);
    printf("\nThanks for playing!\n\n");

    //updating player totals
    currentPlayer->wins += pWins;
    currentPlayer->losses += pLosses;
    currentPlayer->ties += ties;
    return;
}
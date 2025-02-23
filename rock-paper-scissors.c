#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    
    srand(time(NULL));
    
    computerChoice = rand() % 3;

    printf("Choose: 0 - Rock, 1 - Paper, 2 - Scissors >>> ");
    scanf("%d", &userChoice);

    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice! Please select 0, 1, or 2.\n");
        return 0; 
    }

    const char *options[] = {"Rock", "Paper", "Scissors"};
    printf("You chose: %s\n", options[userChoice]);
    printf("Computer chose: %s\n", options[computerChoice]);

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice, tossResult;
    
    srand(time(NULL));
    
    printf("Welcome to Hand Cricket!\n");
    printf("Let's toss to decide who bats first.\n");
    printf("Enter 0 for Heads or 1 for Tails: ");
    scanf("%d", &userChoice);
    tossResult = rand() % 2;
    if (userChoice == tossResult) {
        printf("You won the toss!\n");
        printf("Enter 1 to bat or 0 to bowl: ");
        scanf("%d", &userChoice);
    } else {
        printf("You lost the toss!\n");
        printf("Computer chooses to ");
        userChoice = rand() % 2;
        if (userChoice == 0) {
            printf("bat.\n");
        } else {
            printf("bowl.\n");
        }
    }
    int score = 0;
    int computerScore = 0;
    
    if (userChoice == 1) { 
        printf("You are batting!\n");
        while (1) {
            printf("Enter your choice (1-6): ");
            scanf("%d", &userChoice);
            computerChoice = rand() % 6 + 1;
            printf("Computer chose: %d\n", computerChoice);
            if (userChoice == computerChoice) {
                printf("You're out!\n");
                break;
            }
            score += userChoice;
        }
        printf("Your final score: %d\n", score);
        
        printf("Now, computer is batting!\n");
        while (computerScore <= score) {
            computerChoice = rand() % 6 + 1;
            printf("Enter your choice (1-6): ");
            scanf("%d", &userChoice);
            printf("Computer chose: %d\n", computerChoice);
            if (userChoice == computerChoice) {
                printf("Computer is out!\n");
                break;
            }
            computerScore += computerChoice;
        }
        printf("Computer's final score: %d\n", computerScore);
    } else { 
        printf("Computer is batting first!\n");
        while (1) {
            computerChoice = rand() % 6 + 1;
            printf("Enter your choice (1-6): ");
            scanf("%d", &userChoice);
            printf("Computer chose: %d\n", computerChoice);
            if (userChoice == computerChoice) {
                printf("Computer is out!\n");
                break;
            }
            computerScore += computerChoice;
        }
        printf("Computer's final score: %d\n", computerScore);
        
        printf("Now, you are batting!\n");
        while (1) {
            printf("Enter your choice (1-6): ");
            scanf("%d", &userChoice);
            computerChoice = rand() % 6 + 1;
            printf("Computer chose: %d\n", computerChoice);
            if (userChoice == computerChoice) {
                printf("You're out!\n");
                break;
            }
            score += userChoice;
        }
        printf("Your final score: %d\n", score);
    }
    
    if (score > computerScore) {
        printf("Congratulations! You win!\n");
    } else if (score < computerScore) {
        printf("Computer wins!\n");
    } else {
        printf("It's a tie!\n");
    }
    
    return 0;
}

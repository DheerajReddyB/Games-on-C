#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>

void HandCricket();
void RockPaperScissors();

int main(void) {
  printf("============================================\n");
  printf("************ Welcome To PlayBox ************\n");
  printf("============================================\n");
  printf("*                                          *\n");
  printf("*  Choose The Game You Want To Play        *\n");
  printf("*  1. Tic Tac Toe                          *\n");
  printf("*  2. Rock Paper Scissors                  *\n");
  printf("*  3. Hand Cricket                         *\n");
  printf("*  4. Adventure Game                       *\n");
  printf("*  0. Exit                                 *\n");
  printf("*                                          *\n");
  printf("============================================\n\n");
  int choice;
  
  printf("===================\n");
  printf("Enter Your Choice: ");
  scanf("%d", &choice);
  printf("===================\n\n");

  switch (choice) {
  case 1:
	#include "tictactoe.c"
    int c=1;
	while (c==1)
	{
		playTicTacToe(COMPUTER); 
		printf("\n");
		printf("Press 1 for a new Game: ");
		scanf("%d",&c);
		printf("\n");
	}
    main();
    break;
  case 2:
    RockPaperScissors();
    main();
    break;
  case 3:
    int b=1;
	while (b==1)
	{
	    HandCricket();
		printf("\n");
		printf("Press 1 for a new Game: ");
		scanf("%d",&b);
		printf("\n");
	}
    main();
    break;
  case 4:
    #include "adventure.c"
    int a=1;
	while (a==1)
	{
		srand(time(NULL));

        int playerChoice;
        printf("Welcome to the Text-Based Adventure Game!\n");
        printf("Your quest is to find the hidden treasure deep within the mystical forest.\n");
        printf("\nYou find yourself standing at the edge of a vast, mysterious forest.");
        printf("\nThe trees loom tall, their branches casting eerie shadows in the dim light.");

        playerChoice = displaySituationAndPrompt("Will you enter the forest?",
                                                "Enter the forest.",
                                                "Look for another path.");

        if (playerChoice == 1) {
            printf("\nYou gather your courage and step into the forest, pushing through the dense undergrowth.");
            printf("\nAs you journey deeper into the woods, you hear strange whispers carried on the wind.");
        } else {
            printf("\nYou decide to search for another path around the forest, hoping to avoid its mysterious depths.");
            printf("\nHowever, every route you take seems to lead back to the edge of the forest.");
        }
        printf("\nAs you continue through the forest, you stumble upon an enchanted stream,");
        printf("\nits crystal-clear waters flowing gently over smooth stones.");

        playerChoice = displaySituationAndPrompt("Will you follow the stream?",
                                                "Follow the stream.",
                                                "Continue through the forest.");

        if (playerChoice == 1) {
            printf("\nYou follow the meandering path of the stream, enchanted by its tranquil beauty.");
            printf("\nAlong the banks, you spot shimmering fish darting beneath the surface.");
        } else {
            printf("\nYou decide to continue through the forest, leaving the enchanted stream behind.");
            printf("\nHowever, the sound of flowing water echoes through the trees, tempting you to return.");
        }
        printf("\nAs you journey deeper into the forest, you stumble upon a clearing filled with ancient ruins,");
        printf("\ntheir weathered stones hinting at a long-forgotten civilization.");

        playerChoice = displaySituationAndPrompt("Will you explore the ruins?",
                                                "Explore the ruins.",
                                                "Press on through the forest.");

        if (playerChoice == 1) {
            printf("\nYou venture into the heart of the ruins, marveling at the craftsmanship of the ancients.");
            printf("\nAmong the crumbling walls, you discover inscriptions and carvings depicting a lost history.");
        } else {
            printf("\nYou decide to press on through the forest, leaving the ancient ruins behind.");
            printf("\nHowever, the memory of the ruins lingers in your mind, beckoning you to return.");
        }
        printf("\nAs you explore further, you stumble upon a hidden cave entrance concealed behind a curtain of vines.");
        printf("\nThe darkness within seems to swallow all light, hinting at secrets hidden in its depths.");

        playerChoice = displaySituationAndPrompt("Will you enter the cave?",
                                                "Enter the cave.",
                                                "Continue exploring the forest.");

        if (playerChoice == 1) {
            printf("\nYou summon your courage and step into the darkness of the cave,");
            printf("\nthe cool air sending shivers down your spine as you venture deeper.");
        } else {
            printf("\nYou decide to continue exploring the forest, leaving the hidden cave behind.");
            printf("\nHowever, the lure of the cave's mysteries gnaws at the back of your mind.");
        }
        printf("\nWithin the depths of the cave, you spot a flickering torch casting dancing shadows on the walls.");
        printf("\nIt seems to beckon you further into the darkness, promising both danger and discovery.");

        playerChoice = displaySituationAndPrompt("Will you follow the light of the torch?",
                                                "Follow the torch.",
                                                "Turn back and leave the cave.");

        if (playerChoice == 1) {
            printf("\nYou follow the flickering light of the torch, your heart pounding with anticipation.");
            printf("\nWith each step, the darkness seems to recede, revealing hidden passages and forgotten chambers.");
        } else {
            printf("\nYou decide to turn back and leave the cave, the flickering torch fading behind you.");
            printf("\nYet, the allure of the cave's mysteries remains etched in your mind.");
        }
        printf("\nAs you delve deeper into the cave, you come upon a treacherous chasm,");
        printf("\nits yawning abyss stretching into the depths below.");

        playerChoice = displaySituationAndPrompt("Will you attempt to cross the chasm?",
                                                "Cross the chasm.",
                                                "Search for another route.");

        if (playerChoice == 1) {
            printf("\nYou steel yourself and take a daring leap across the chasm, your heart in your throat.");
            printf("\nMiraculously, you land safely on the other side, adrenaline coursing through your veins.");
        } else {
            printf("\nYou search for another route around the chasm, determined to find a safer passage.");
            printf("\nAfter what feels like hours of searching, you discover a narrow bridge spanning the divide.");
        }
        printf("\nOn the other side of the chasm, you encounter a cavern filled with glowing crystals,");
        printf("\ntheir ethereal light bathing the chamber in a soft, iridescent glow.");

        playerChoice = displaySituationAndPrompt("Will you approach the crystals?",
                                                "Approach the crystals.",
                                                "Proceed deeper into the cavern.");

        if (playerChoice == 1) {
            printf("\nYou approach the glowing crystals with caution, mesmerized by their otherworldly beauty.");
            printf("\nAs you reach out to touch one, you feel a strange energy coursing through your fingertips.");
        } else {
            printf("\nYou proceed deeper into the cavern, eager to explore its hidden depths.");
            printf("\nThe crystals' glow guides your way as you navigate the twisting passages.");
        }
        printf("\nAt the heart of the cavern, you discover a massive stone door adorned with ancient runes.");
        printf("\nIt seems to guard a hidden chamber filled with untold treasures.");

        playerChoice = displaySituationAndPrompt("Will you attempt to open the door?",
                                                "Try to open the door.",
                                                "Search for another way into the chamber.");

        if (playerChoice == 1) {
            printf("\nYou push against the stone door with all your might, the sound of grinding stone echoing through the cavern.");
            printf("\nSlowly, the door creaks open, revealing the chamber beyond.");
        } else {
            printf("\nYou search for another way into the chamber, scouring the walls for any hidden passages.");
            printf("\nAfter what feels like an eternity, you discover a secret lever that triggers the door to open.");
        }
        printf("\nAs the door swings open, you are bathed in the golden light of the hidden chamber.");
        printf("\nBefore you lies the fabled treasure, gleaming with unimaginable wealth and power.");

        playerChoice = displaySituationAndPrompt("Will you claim the treasure?",
                                                "Claim the treasure.",
                                                "Leave the treasure untouched.");

        if (playerChoice == 1) {
            printf("\nYou step into the chamber and claim the treasure as your own, your heart racing with excitement.");
            printf("\nAs you gaze upon the riches before you, you can't help but feel a sense of triumph and fulfillment.");
            printf("\nCongratulations! You've found the hidden treasure and emerged victorious!");
        } else {
            printf("\nYou resist the temptation to claim the treasure, knowing that some secrets are best left undisturbed.");
            printf("\nAs you leave the chamber behind, you can't help but wonder about the countless adventures still waiting to be had.");
        }
        printf("\nAs you make your way back through the forest, you stumble upon a grove shrouded in mist.");
        printf("\nThe air grows cold, and a sense of unease washes over you.");

        playerChoice = displaySituationAndPrompt("Will you investigate the grove?",
                                                "Investigate the grove.",
                                                "Hurry out of the grove.");

        if (playerChoice == 1) {
            printf("\nYou cautiously enter the mist-shrouded grove, the hairs on the back of your neck standing on end.");
            printf("\nIn the distance, you hear faint whispers and the rustle of unseen movement.");
        } else {
            printf("\nYou hastily retreat from the haunted grove, the sense of unease lingering in your mind.");
            printf("\nAs you leave, you can't shake the feeling of being watched by unseen eyes.");
        }
        printf("\nAs you explore the grove, a sudden chill fills the air, and the mist coalesces into a ghostly figure.");
        printf("\nIts spectral form glows with an eerie light, and its eyes bore into your soul.");

        playerChoice = displaySituationAndPrompt("Will you confront the ghost?",
                                                "Confront the ghost.",
                                                "Attempt to flee.");

        if (playerChoice == 1) {
            printf("\nYou steel yourself and confront the ghost, demanding to know its purpose in the grove.");
            printf("\nThe ghost's ethereal voice whispers secrets of the forest and the hidden dangers that lurk within.");
        } else {
            printf("\nYou turn and attempt to flee from the ghost, but its haunting gaze follows you wherever you go.");
            printf("\nNo matter how fast you run, you cannot escape the ghost's spectral presence.");
        }
        printf("\nAs you converse with the ghost, the mist parts to reveal a towering figure, clad in ancient armor.");
        printf("\nIt is the guardian spirit of the grove, bound to protect its secrets for all eternity.");

        playerChoice = displaySituationAndPrompt("Will you heed the guardian's warning?",
                                                "Heed the guardian's warning.",
                                                "Defy the guardian and press on.");

        if (playerChoice == 1) {
            printf("\nYou bow your head in respect and heed the guardian's warning, vowing to tread cautiously in the forest.");
            printf("\nThe guardian nods in approval before fading back into the mist, its duty fulfilled.");
        } else {
            printf("\nYou defiantly ignore the guardian's warning, determined to uncover the forest's secrets at any cost.");
            printf("\nThe guardian's spectral form grows dimmer as it shakes its head in silent disappointment.");
        }
        printf("\nAs you journey deeper into the forest, you stumble upon the remains of an old campsite.");
        printf("\nTattered tents flap in the breeze, and the embers of a long-extinguished fire smolder nearby.");

        playerChoice = displaySituationAndPrompt("Will you search the campsite for clues?",
                                                "Search the campsite.",
                                                "Press on through the forest.");

        if (playerChoice == 1) {
            printf("\nYou carefully search the campsite, sifting through the debris for any sign of the lost explorer.");
            printf("\nAmongst the scattered belongings, you find a journal detailing their ill-fated journey.");
        } else {
            printf("\nYou decide to press on through the forest, leaving the abandoned campsite behind.");
            printf("\nHowever, the memory of the lost explorer weighs heavily on your mind as you journey deeper into the unknown.");
        }
        printf("\nAs night falls, you come upon a clearing bathed in moonlight, surrounded by gnarled trees.");
        printf("\nA sense of foreboding washes over you as you realize this is the forbidden clearing spoken of in ancient legends.");

        playerChoice = displaySituationAndPrompt("Will you enter the forbidden clearing?",
                                                "Enter the clearing.",
                                                "Avoid the clearing and continue your journey.");

        if (playerChoice == 1) {
            printf("\nWith a mixture of trepidation and curiosity, you step into the forbidden clearing, the moon casting eerie shadows on the ground.");
            printf("\nIn the center of the clearing, you find an ancient altar, adorned with strange symbols and offerings.");
        } else {
            printf("\nYou decide to avoid the forbidden clearing, heeding the warnings of ancient legends.");
            printf("\nThe sense of foreboding lifts as you continue your journey through the forest, but the memory of the clearing lingers in your mind.");
        }
        printf("\nAs you approach the altar, the ground begins to tremble, and the trees around you groan with an otherworldly presence.");
        printf("\nBefore you stands a spectral figure, the guardian of the forbidden clearing, its eyes ablaze with ancient wisdom.");

        playerChoice = displaySituationAndPrompt("Will you accept the guardian's test?",
                                                "Accept the test.",
                                                "Refuse the test and leave the clearing.");

        if (playerChoice == 1) {
            printf("\nYou accept the guardian's test, steeling yourself for whatever challenges lie ahead.");
            printf("\nWith a nod of approval, the guardian fades away, leaving you to face the trials of the clearing alone.");
        } else {
            printf("\nYou refuse the guardian's test, unwilling to risk the dangers that lurk within the forbidden clearing.");
            printf("\nThe guardian's eyes narrow in disappointment as it vanishes into the shadows, leaving you to ponder your decision.");
        }
        printf("\nAs you stand in the clearing, a series of spectral apparitions materialize before you, each representing a test of courage.");

        playerChoice = displaySituationAndPrompt("Will you face the trials?",
                                                "Face the trials.",
                                                "Flee from the clearing.");

        if (playerChoice == 1) {
            printf("\nWith determination in your heart, you face the trials head-on, steeling yourself against the spectral challenges.");
            printf("\nEach trial pushes you to the limits of your courage, but you press on, undeterred by fear.");
        } else {
            printf("\nOverwhelmed by fear, you turn and flee from the clearing, the spectral apparitions fading behind you.");
            printf("\nThough you escape the trials, the memory of your cowardice haunts you as you continue your journey through the forest.");
        }
        printf("\nAs you emerge from the clearing, the guardian appears once more, its gaze piercing through to your very soul.");
        printf("\nIt is time for the guardian to judge whether you are worthy to continue your quest.");

        playerChoice = displaySituationAndPrompt("Will you accept the guardian's judgment?",
                                                "Accept the judgment.",
                                                "Challenge the guardian's decision.");

        if (playerChoice == 1) {
            printf("\nWith humility in your heart, you accept the guardian's judgment, ready to face whatever fate awaits you.");
            printf("\nThe guardian's eyes soften with approval as it nods in acknowledgment of your resolve.");
        } else {
            printf("\nWith defiance in your heart, you challenge the guardian's decision, refusing to accept its judgment.");
            printf("\nThe guardian's eyes flare with righteous anger as it prepares to test your mettle once more.");
        }
        printf("\nThe guardian leads you to the heart of the forest, where a final trial awaits to test your worthiness.");

        playerChoice = displaySituationAndPrompt("Will you face the final trial?",
                                                "Face the final trial.",
                                                "Attempt to circumvent the trial.");

        if (playerChoice == 1) {
            printf("\nWith determination coursing through your veins, you face the final trial head-on, ready to prove your worth.");
            printf("\nThe challenges you face are greater than any you've encountered before, but you press on, fueled by determination.");
        } else {
            printf("\nFearing failure, you attempt to circumvent the final trial, seeking a shortcut to your goal.");
            printf("\nHowever, your efforts are in vain as the guardian blocks your path, forcing you to confront the trial head-on.");
        }
        printf("\nAs you overcome the final trial, a blinding light fills the forest, illuminating the hidden path to the treasure's location.");
        printf("\nWith a sense of awe and wonder, you follow the light, knowing that your journey is reaching its conclusion.");
        printf("\nAt last, you arrive at the hidden chamber where the treasure awaits, its brilliance dazzling your senses.");

        playerChoice = displaySituationAndPrompt("Will you claim the treasure?",
                                                "Claim the treasure.",
                                                "Reflect on your journey.");

        if (playerChoice == 1) {
            printf("\nWith a sense of triumph, you claim the treasure as your own, knowing that you have earned it through your courage and perseverance.");
            printf("\nAs you gaze upon the riches before you, you can't help but marvel at the journey that has brought you here.");
            printf("\nCongratulations! You've found the hidden treasure and emerged victorious!");
        } else {
            printf("\nYou take a moment to reflect on your journey, the trials and challenges you've overcome, and the lessons you've learned along the way.");
            printf("\nThough the treasure beckons, you know that true wealth lies not in gold or jewels, but in the experiences that shape us.");
            printf("\nWith a contented sigh, you leave the chamber behind, ready to face whatever adventures the future may hold.");
        }
        printf("\n");
        printf("\nThank you for playing the Text-Based Adventure Game!\n");
        printf("\n"); 
		printf("\n");
		printf("Press 1 for a new Game: ");
		scanf("%d",&a);
		printf("\n");
	}
    main();
    break;
  default:
    printf("Shutting Down...");
    //system("C:\\WINDOWS\\System32\\shutdown /s");
  }
}


void HandCricket()
{
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
}


void RockPaperScissors()
{
    #define ROCK 1
    #define PAPER 2
    #define SCISSORS 3
    int playerScore = 0;
    int computerScore = 0;
    int rounds = 0;

    printf("Welcome to Rock-Paper-Scissors game!\n\n");

    while(1) {
        int playerMove;
        printf("Enter your move (1 = Rock, 2 = Paper, 3 = Scissors, 0 = Quit): ");
        scanf("%d", &playerMove);

        if (playerMove == 0) {
            break;
        }

        if (playerMove < 1 || playerMove > 3) {
            printf("Invalid move! Please try again.\n");
            continue;
        }

        int computerMove = rand() % 3 + 1;

        printf("You played: ");
        switch(playerMove) {
            case ROCK:
                printf("Rock\n");
                break;
            case PAPER:
                printf("Paper\n");
                break;
            case SCISSORS:
                printf("Scissors\n");
                break;
        }

        printf("Computer played: ");
        switch(computerMove) {
            case ROCK:
                printf("Rock\n");
                break;
            case PAPER:
                printf("Paper\n");
                break;
            case SCISSORS:
                printf("Scissors\n");
                break;
        }

        if (playerMove == computerMove) {
            printf("It's a tie!\n");
        } else if (playerMove == ROCK && computerMove == SCISSORS ||
                   playerMove == PAPER && computerMove == ROCK ||
                   playerMove == SCISSORS && computerMove == PAPER) {
            printf("You win this round!\n");
            playerScore++;
        } else {
            printf("Computer wins this round!\n");
            computerScore++;
        }

        rounds++;
        printf("Current score: You %d - %d Computer\n\n", playerScore, computerScore);
    }

    printf("\nFinal score: You %d - %d Computer\n", playerScore, computerScore);
    printf("Total rounds played: %d\n", rounds);
}
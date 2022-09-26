#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
int yourScore = 0;
int aiScore = 0;
int main() {
	printf("\033[35m----------------------------------------------\n");
	printf("      Welcome to the Dice Throwing game!\n");
	printf("                 Goodluck!.\n");
	printf("----------------------------------------------\n\033[37m");
	getch();
	start();
}

int start() {
	printf("The score is currently %d - %d\n", yourScore, aiScore);
	if (yourScore > aiScore) { printf("\033[92mYou are currently in the lead!\n\033[37m"); }
	else if (yourScore < aiScore) { printf("\033[31mThe computer is in the lead!\n\033[37m"); }
	else if (yourScore == aiScore) { printf("\033[37mIt is currently a tie!\n\033[37m"); }
	printf("Do you want to continue? (y/n)");
	char contin;
	scanf(" %c", &contin);
	if (contin == 'n') {
		if (yourScore > aiScore) { printf("Ending on a high note? Coward.\n"); }
		else if (yourScore < aiScore) { printf("You lost against the computer? What a loser.\n"); }
		else if (yourScore == aiScore) { printf("A tie? Really? What a waste.\n"); }
	}
	else if (contin == 'y'){
		srand(time(0));
		int player = rand() % 6;
		int computer = rand() % 6;
		player += 1;
		computer += 1;
		printf("Press [Enter] to throw dice!");
		getch();
		printf("\nYour dice:");
		switch (player) {
		case '1':
			printf("\n---------\n|       |\n|   *   |\n|       |\n---------");
			yourScore += 1;
			break;
		case '2':
			printf("\n---------\n|   *   |\n|       |\n|   *   |\n---------");
			yourScore += 2;
			break;
		case '3':
			printf("\n---------\n|   *   |\n|   *   |\n|   *   |\n---------");
			yourScore += 3;
			break;
		case '4':
			printf("\n---------\n| *   * |\n|       |\n| *   * |\n---------");
			yourScore += 4;
			break;
		case '5':
			printf("\n---------\n| *   * |\n|   *   |\n| *   * |\n---------");
			yourScore += 5;
			break;
		case '6':
			printf("\n---------\n| *   * |\n| *   * |\n| *   * |\n---------");
			yourScore += 6;
			break;

		}
		Sleep(500);
		printf("\nComputers Dice:");
		switch (computer) {
		case '1':
			printf("\n---------\n|       |\n|   *   |\n|       |\n---------");
			aiScore += 1;
			break;
		case '2':
			printf("\n---------\n|   *   |\n|       |\n|   *   |\n---------");
			aiScore += 2;
			break;
		case '3':
			printf("\n---------\n|   *   |\n|   *   |\n|   *   |\n---------");
			aiScore += 3;
			break;
		case '4':
			printf("\n---------\n| *   * |\n|       |\n| *   * |\n---------");
			aiScore += 4;
			break;
		case '5':
			printf("\n---------\n| *   * |\n|   *   |\n| *   * |\n---------");
			aiScore += 5;
			break;
		case '6':
			printf("\n---------\n| *   * |\n| *   * |\n| *   * |\n---------");
			aiScore += 6;
			break;

		}
		Sleep(1500);
		if (player > computer) {
			printf("\033[92mYou won this round.\n\033[37m");
		}
		else if (player < computer) {
			printf("\033[31mYou lost this round.\n\033[37m");
		}
		else if (player == computer) {
			printf("This round was a tie!\n");
		}
		start();
	}
	else {
		start();
	}
}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct {

	struct player *next;
	struct player *prev;
	int speed;
	int attack;
	int defense;

} player;

static int randomNum(int min, int max) {

	double scale = (double) (max - min) / RAND_MAX;
	int val = min + floor(rand() * scale);
	return val;

}

static char *getWelcomeString() {

	char *welcome = "\n\tFootball Manager\n\n";
	return welcome;	

}

static void setPlayerStats(player *currentPlayer) {
	currentPlayer->speed = randomNum(0, 10);
	currentPlayer->attack = randomNum(0, 10);
	currentPlayer->defense = randomNum(0, 10);
}

int main() {

	int c = 0;

	printf(getWelcomeString());

	player team[10]; 

	for(c = 0; c < 11; c++) {
		setPlayerStats(&team[c]);
		printf("\n\tPlayer %d \n\t\tSpeed: %d", c, team[c].speed);
	}

	printf("\n");	
	return 0;

}

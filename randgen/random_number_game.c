#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int y, a, b, c, n, m, x;
	/*char name[15];
	  printf("What's your name: ");
	  scanf("%s", name);
	  printf("How many times do you want to try?:");
	  scanf("%d", &a);
	  printf("You will try for %d time(s)\n", a);
	  for (c = 1; c <= a; c++)*/
	printf("===========================================================================================\n");
	printf("THIS IS A GUESSING GAME WHERE YOU GUESS A RANDOM NUMBER THAT WILL BE POSTED BY THE COMPUTER\n");
	printf("GUESS RIGHT WITHIN 6 ATTEMPTS AND WIN COOL CASH\n");
	printf("===========================================================================================\n\n");
	x = 40;
	printf("How much do you want to play with?: ");
	scanf("%d", &m);
	for (c = 1; c <=6; c++)
	{
		srand(time(0));
		n = (rand() % 10) + 1;
		if (c == 4){
			x *= 0.4;
			y = m * x;
		}
		else if (c == 6)
			y = m / 2;
		else {
			x /= 2;
			y = m * x;
		}
		printf("For N%d, Enter your guess from 1 to 10: ", y);
		scanf("%d", &b);
		printf("Your guess is %d\n", b);
		printf("Random num is %d\n", n);
		if (b == n)
		{
			printf("Congrattulations!!! You won N%d\n", y);
			c = 6;
		}
		else
			if (c == 5)
				printf("You're wrong, try again.... %d try left\n", (6 - c));
			else if (c == 6)
				printf("You're wrong, %d try left. GAME OVER!!!\n", (6 - c));
			else
				printf("You're wrong, try again.... %d tries left\n", (6 - c));
	}
}

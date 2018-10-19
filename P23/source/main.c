#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum Status{CONTINUE,WON,LOST};
int rollDice(void);
int main(void){
	int sum;
	int myPoint;
	enum Status gameStatus;
	srand(time(NULL));
	sum = rollDice();
	switch (sum)
	{
	case 7:
	case 11:
		gameStatus = WON;
		break;
	case2:
	case3:
	case 12:
		gameStatus = LOST;
			break;
	default:
		gameStatus = CONTINUE;
		myPoint = sum;
		printf("Point is %d\n", myPoint);
		break;
	}
	while (gameStatus == CONTINUE){
		sum == rollDice();
		if (sum == myPoint) gameStatus = WON;
		else {
			if (sum == 7) gameStatus = LOST;
		}
	}
	if (gameStatus == WON) printf("player wins\n");
	else printf("player loses\n");

	

	system("pause");
	return 0;
}
int rollDice(void){
	int a,b,c;
	a = 1 + (rand() % 6);
	b = 1 + (rand() % 6);
	c = a + b;
	printf("Player rollde %d + %d = %d \n", a, b, c);
	return c;



}
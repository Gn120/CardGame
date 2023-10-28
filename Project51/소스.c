#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(void)
{
	int i, n = 1, count1 = 0, count2 = 0, com1, com2, com3, hum, win = 0, comwin = 0;

	//time_t current_time;
	//current_time = time(NULL);
	//srand(current_time);
	srand(time(NULL));

	printf("사람 1은 승자를 예측하시오(1 또는 2) : ");
	scanf("%d", &hum);
	printf("com3은 %d를 승자로 예측합니다.\n\n", com3 = (rand() % 2) + 1);

	//예외처리
	if (hum < 1 || hum > 3)
		return;

	for (i = 0; i < 3; i++)
	{
		com1 = rand() % 11;
		com2 = rand() % 11;
		printf("%d 번째 판 \n" , n);
		printf("com 1 : 카드 %d \n", com1);
		printf("com 2 : 카드 %d \n\n", com2);

		if (com1 < com2) {
			count2 += 1;
			if (hum == 2)
				win += 1;
			else
				win += 0;
			if (com3 == 2)
				comwin += 1;
			else
				comwin += 0;
		}
		else if (com1 > com2) {
			count1 += 1;
			if (hum == 1)
				win += 1;
			else
				win += 0;
			if (com3 == 1)
				comwin += 1;
			else
				comwin += 0;
		}
		else
			printf("무승부\n");

		n++;
	}

	if (count1 < count2) {
		printf("승자 \ncom2\n");
		if (win < comwin) {
			printf("로봇win!");
		}
		else if (win > comwin) {
			printf("사람win!");
		}
		else
			printf("무승부!");
	}
	else if (count1 > count2)
	{
		printf("승자 \ncom1\n");
		if (win < comwin) {
			printf("로봇win!");
		}
		else if (win > comwin) {
			printf("사람win!");
		}
		else
			printf("무승부!");
	}		
	else
		printf("com1 vs com2 무승부!");
	
	return;
}
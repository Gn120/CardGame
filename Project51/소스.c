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

	printf("��� 1�� ���ڸ� �����Ͻÿ�(1 �Ǵ� 2) : ");
	scanf("%d", &hum);
	printf("com3�� %d�� ���ڷ� �����մϴ�.\n\n", com3 = (rand() % 2) + 1);

	//����ó��
	if (hum < 1 || hum > 3)
		return;

	for (i = 0; i < 3; i++)
	{
		com1 = rand() % 11;
		com2 = rand() % 11;
		printf("%d ��° �� \n" , n);
		printf("com 1 : ī�� %d \n", com1);
		printf("com 2 : ī�� %d \n\n", com2);

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
			printf("���º�\n");

		n++;
	}

	if (count1 < count2) {
		printf("���� \ncom2\n");
		if (win < comwin) {
			printf("�κ�win!");
		}
		else if (win > comwin) {
			printf("���win!");
		}
		else
			printf("���º�!");
	}
	else if (count1 > count2)
	{
		printf("���� \ncom1\n");
		if (win < comwin) {
			printf("�κ�win!");
		}
		else if (win > comwin) {
			printf("���win!");
		}
		else
			printf("���º�!");
	}		
	else
		printf("com1 vs com2 ���º�!");
	
	return;
}
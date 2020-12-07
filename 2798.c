#include <stdio.h>
#include <math.h>

/*int		recursive(int *num, int i, int count)
{
	int k;
	int	tmp;
	if (count < 0)
		return (0);
	else if (count == 0)
		k = i == 1 ? num[count] : 0;
	else
		k = (i / (int)pow(2, count)) == 1 ? num[count] : 0;
	return (k + recursive(num, i % (int)pow(2, count), count - 1));
}

int		blackjack(int *num, int count, int goal)
{
	int res;
	int temp;

	res = 0;
	temp = 0;
	printf("temp : ");
	for (int i = 0; i < (int)pow(2, count); i++)
	{
		temp = recursive(num, i, count - 1);
		printf("%d ", temp);
		if (temp <= goal && temp > res)
		{
			res = temp;
		}
	}
	printf("\nres : %d\n", res);
	return (res);
}*/

int		blackjack(int *num, int count, int goal)
{
	int res;
	int temp;
	int add[3];

	res = 0;
	temp = 0;
	for (int i = 0; i < count - 2; i++)
	{
		for (int j = i + 1; j < count -1; j++)
		{
			for (int k = j + 1; k < count; k++)
			{
				temp = (num[i] + num[j] + num[k]);
				res = (temp > res && temp <= goal) ? temp : res;
			}
		}
	}
	return (res);
}

int		main(void)
{
	int	count;
	int	goal;
	int res;

	res = 0;
	scanf("%d %d", &count, &goal);
	int	num[count];
	for(int i = 0; i < count; i++)
		scanf("%d", &num[i]);
	res = blackjack(num, count, goal);
	printf("%d\n", res);
	return (0);
}

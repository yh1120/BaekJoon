#include <stdio.h>

int		main(void)
{
	int num;
	int	weight[50] = {0, };
	int	height[50] = {0, };
	int	ret[50];

	scanf("%d", &num);
	for (int i = 0; i < num; i++)
		scanf("%d %d", &weight[i], &height[i]);
	for (int j = 0; j < num; j++)
	{
		ret[j] = 1;
		for (int i = 0; i < num; i++)
			if (weight[j] < weight[i] && height[j] < height[i])
				ret[j] += 1;
	}
	for(int i = 0; i < num - 1; i++)
		printf("%d ", ret[i]);
	printf("%d", ret[num - 1]);
	return (0);

}

#include <stdio.h>

int		main(void)
{
	int num;
	int	arr[7] = {0, };
	int k;

	k = 0;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		for (int j = i; j > 0; j = j / 10)
		{
			arr[k++] = j % 10;
		}
		if (i + arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] == num)
		{
			printf("\n%d\n", i);
			break;
		}
//		for (int i = 0; i < 7; i++)
//			arr[i] = 0;
	}
	return (0);

}

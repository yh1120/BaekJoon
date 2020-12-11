#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	int x;
	int y;
	int res;
	res = 0;
	scanf("%d %d", &x, &y);
	x = 10;
	y = 10;
	char	arr[x * y];
	for (int i = 0; i < x; i++)
		scanf("%s", &arr[i][0]);
	printf("%s", arr);

	for (int i = 0; i + 7 < x; i++)
	{
		int tmp = 0;
		for(int j = 0; j + 7 < y; j++)
		{
			for (int k = 0; k < 8; k++)
				for(int l = 0; l < 8; l++)
					if (k % 2 == 0 && ((l % 2 == 0) && *(arr + (i + k)*)))

		}


			if (((i + j) % 2 == 0 && *(arr + i * y + j) == 'B') || ((i + j) % 2 == 1 && *(arr + i * y + j) == 'W'))
				tmp++;


		if (tmp > 32)
			tmp = 64 - tmp;
		res = (res > tmp) ? tmp : res;
	}
	printf("%d", res);
	return (0);
}

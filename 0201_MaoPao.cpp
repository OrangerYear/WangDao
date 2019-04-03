//P8 ≥Ã–Ú2.1 √∞≈›≈≈–Ú

#include<stdio.h>
int main()
{
	int n;
	int buf[100];
	while (scanf_s("%d",&n)!=EOF)
	{
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &buf[i]);
		}
		for (int i = 0; i<n; i++)
		{
			for (int j = 0; j < n-i-1; j++)
			{
				if (buf[j] > buf[j + 1]) //√∞≈›≈≈–Ú÷˜ÃÂ
				{
					int tmp = buf[j];
					buf[j] = buf[j + 1];
					buf[j + 1] = tmp;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			printf("%d ",buf[i]);
		}
		printf("\n");
	}
	return 0;
}

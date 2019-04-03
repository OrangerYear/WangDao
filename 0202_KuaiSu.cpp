//P10 ¿ìËÙÅÅĞò
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int buf[100];
	while (scanf_s("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &buf[i]);
		}
		sort(buf,buf+n);//ÖØÔØ
		for (int i = 0; i < n; i++)
		{
			printf("%d ",buf[i]);
		}
		printf("\n");
	}
	return 0;
}
//P10 定义cmp函数实现降序快速排序
#include<stdlib.h>
#include<algorithm>
using namespace std;
bool cmp(int x, int y)
{
	return x > y;
}

int main()
{
	int n;
	int buf[100];
	while (scanf_s("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d",&buf[i]);
		}
		sort(buf,buf+n,cmp);
		for (int i = 0; i < n; i++)
		{
			printf("%d ",buf[i]);
		}
		printf("\n");
	}
	return 0;
}
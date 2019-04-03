//P12 结构体排序 快速排序
#include<stdio.h>
#include<algorithm>
#include<string.h>

using namespace std;

struct E {
	char name[101];
	unsigned int age;
	unsigned int score;
}buf[1000];

bool cmp(E a, E b) {
	if (a.score != b.score)
		return a.score < b.score;//分低在前
	int tmp = strcmp(a.name, b.name);//分同看名字
	if (tmp != 0) {
		return tmp < 0;
	}
	else
		return a.age < b.age;//名同看年龄
}

int main() {
	int n;
	while (scanf_s("%d", &n) != EOF) {
		for (int i = 0; i < n; i++)
		{
			scanf_s("%s %d %d", buf[i].name,101, &buf[i].age, &buf[i].score);
		}
		sort(buf, buf + n, cmp);
		for (int i = 0; i < n; i++)
		{
			printf("%s %d %d\n", buf[i].name, buf[i].age, buf[i].score);
		}
	}
	return 0;
}
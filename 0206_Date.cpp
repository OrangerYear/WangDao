//P15 日期间隔
#include<stdio.h>
#define ISYEAP(x) x%100 !=0 && x%4==0 || x%400==0 ? 1:0

int DayOfMonth[13][2] = {
	0,0,
	31,31,
	28,29,
	31,31,
	30,30,
	31,31,
	30,30,
	31,31,
	31,31,
	30,30,
	31,31,
	30,30,
	31,31,
};
struct Date {
	int Day;
	int Month;
	int Year;
	void nextDay() {
		Day++;
		if (Day > DayOfMonth[Month][ISYEAP(Year)]) {
			Day = 1;
			Month++;
			if (Month > 12) {
				Month = 1;
				Year++;
			}
		}
	}
};

int buf[5001][13][32];
int Abs(int x) {
	return x < 0 ? -x: x;
}

int main() {
	Date tmp;
	int cnt = 0; //count number date
	tmp.Day = 1;
	tmp.Month = 1;
	tmp.Year = 0;
	while (tmp.Year != 5001) {
		buf[tmp.Year][tmp.Month][tmp.Day] = cnt; //都转化为求与0年1月1日间的天数差
		tmp.nextDay();
		cnt++;
	}
	int d1, m1, y1;
	int d2, m2, y2;
	while (scanf_s("%4d%2d%2d", &y1, &m1, &d1)!=EOF) {
		scanf_s("%4d%2d%2d", &y2, &m2, &d2);
		printf("%d\n", Abs(buf[y2][m2][d2] - buf[y1][m1][d1] + 1));
	}
	return 0;
}
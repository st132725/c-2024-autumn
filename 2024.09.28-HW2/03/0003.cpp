#include<stdio.h>
#include<cmath>

int main(int argc, char argv[]) {
	int x1 = 0, y1 = 0, r1 = 0;
	int x2 = 0, y2 = 0, r2 = 0;
	scanf_s("%d %d %d", &x1, &y1, &r1);
	scanf_s("%d %d %d", &x2, &y2, &r2);
	int dx = 0, dy = 0;
	dx = x1 - x2;
	dy = y1 - y2;
	double l = pow(((dx * dx) + (dy * dy)), 0.5);
	if ((l + r1 >= r2) && (l + r2 >= r1) && (r1 + r2 >= l)) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}
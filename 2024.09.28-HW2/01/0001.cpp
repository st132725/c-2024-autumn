#include<stdio.h>

int main(int argc, char* argv[]) {
	int x1 = 0, y1 = 0;
	int x2 = 0, y2 = 0;
	scanf_s("%d %d", &x1, &y1);
	scanf_s("%d %d", &x2, &y2);
	if ((x1 == x2) || (y1 == y2)) {
		printf("YES");
		return 0;
	}
	else if ((x2 - x1) == (y2 - y1)) {
		printf("YES");
		return 0;
	}
	else if ((x1 - x2) == (y1 - y2)) {
		printf("YES");
		return 0;
	}
	else if (-(x1 - x2) == (y1 - y2)) {
		printf("YES");
		return 0;
	}
	else if (-(x2 - x1) == y2 - y1) {
		printf("YES");
		return 0;
	}
	else {
		printf("NO");
		return 0;
	}
}
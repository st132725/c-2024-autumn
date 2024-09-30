#include<cstdio>

int main(int argc, char argv[]) {
	int x1 = 0, y1 = 0, z1 = 0;
	int x2 = 0, y2 = 0, z2 = 0;
	scanf_s("%d %d %d", &x1, &y1, &z1);
	scanf_s("%d %d %d", &x2, &y2, &z2);
	if (x1 > y1) {
		x1 = x1 + y1;
		y1 = x1 - y1;
		x1 = x1 - y1;
	}
	if (y1 > z1) {
		z1 = z1 + y1;
		y1 = z1 - y1;
		z1 = z1 - y1;
	}
	if (x1 > y1) {
		x1 = x1 + y1;
		y1 = x1 - y1;
		x1 = x1 - y1;
	}
	if (x2 > y2) {
		x2 = x2 + y2;
		y2 = x2 - y2;
		x2 = x2 - y2;
	}
	if (y2 > z2) {
		y2 = y2 + z2;
		z2 = y2 - z2;
		y2 = y2 - z2;
	}
	if (x2 > y2) {
		x2 = x2 + y2;
		y2 = x2 - y2;
		x2 = x2 - y2;
	}

	if (x1 == x2 && y1 == y2 && z1 == z2) {
		printf("Boxes are equal");
	}
	else if (x1 >= x2 && y1 >= y2 && z1 >= z2) {
		printf("The first box is larger than the second one");
	}
	else if (x1 <= x2 && y1 <= y2 && z1 <= z2) {
		printf("The first box is smaller than the second one");
	}
	else {
		printf("Boxes are incomparable");
	}

	return 0;
}
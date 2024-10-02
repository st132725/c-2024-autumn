#include<cstdio>

int main(int argc, char* arhv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int mn = -1;
	int my = -1;
	for (int i = 0; i < n; ++i) {
		int a = 0, b = 0;
		scanf_s("%d %d", &a, &b);
		if (b == 1) {
			if (a > my) {
				my = a;
				mn = 1 + i;
			}
		}
	}
	printf("%d", mn);

	return 0;
}
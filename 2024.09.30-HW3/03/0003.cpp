#include<cstdio>

int main(int arhc, char* arhv[]) {
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i) {
		int c = 0;
		scanf_s("%d", &c);
		if (c <= 437) {
			printf("Crash %d", 1 + i);
			return 0;
		}
	}
	printf("No crash");
	return 0;
}
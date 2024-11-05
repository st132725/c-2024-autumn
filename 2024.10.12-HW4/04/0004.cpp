#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int a[1002] = { 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}

	a[n] = a[0];
	a[n + 1] = a[1];
	
	int maxx = 0;
	for (int i = 1; i < n + 1; ++i) {
		if (maxx < a[i - 1] + a[i] + a[i + 1]) {
			maxx = a[i - 1] + a[i] + a[i + 1];
		}
	}
	printf("%d", maxx);

	return 0;
}
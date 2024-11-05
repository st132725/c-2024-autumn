#include <cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int a[100]{ 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}

	int p[100]{ 0 };
	for (int i = 0; i < n; ++i)	{
		scanf_s("%d", &p[i]);
	}

	int maxx = a[0] * p[0];
	int c = 1;
	for (int i = 1; i < n; ++i)	{
		int t = a[i] * p[i];
		if (maxx < t) {
			maxx = t;
			c = i + 1;
		}
	}
	printf("%d", c);

	return 0;
}
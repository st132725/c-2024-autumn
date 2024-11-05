#include <cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int a[1000] = { 0 };
	for (int i = 0; i < n; ++i)	{
		scanf_s("%d", &a[i]);
	}

	int m = 0;
	scanf_s("%d", &m);

	for (int i = 0; i < m; ++i)	{
		int b = 0;
		int d = 0;
		scanf_s("%d", &b);
		scanf_s("%d", &d);

		for (int j = b - 1; j < d; ++j)	{
			printf("%d ", a[j]);
		}
		printf("\n");
	}

	return 0;
}
#include <cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int a[1000] = { 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}

	for (int i = n - 1; i >= 0; --i)	{
		printf_s("%d ", a[i]);
	}

	return 0;
}
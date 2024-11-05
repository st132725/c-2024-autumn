#include <cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int a[100]{ 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}

	int x = 0;
	scanf_s("%d", &x);

	bool c = true;
	for (int i = 0; i < n; ++i)	{
		if (a[i] < x) {
			printf("%d", i + 1);
			c = false;
			break;
		}
	}
	if (c) {
		printf("%d", n + 1);
	}

	return 0;
}
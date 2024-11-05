#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int a[1000]{ 1 };
	for (int i = 1; i < n; ++i) {
		a[i] = i + 1;
	}

	for (int l = 0; l < 2; ++l)	{
		int b = 0;
		int d = 0;
		scanf_s("%d", &b);
		scanf_s("%d", &d);

		int c = b - 1;
		int e = d - 1;
		while (c < e) {
			a[c] ^= a[e] ^= a[c] ^= a[e];
			++c;
			--e;
		}
	}

	for (int i = 0; i < n; ++i)	{
		printf("%d ", a[i]);
	}

	return 0;
}
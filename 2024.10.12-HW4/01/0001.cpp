#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int a[1000] = { 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}

	int x = 0;
	scanf_s("%d", &x);
	int c = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] == x) {
			++c;
		}
	}
	printf("%d", c);

	return 0;
}
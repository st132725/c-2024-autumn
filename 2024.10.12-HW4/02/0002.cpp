#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int a[1000] = { 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}

	int l = 0, r = 0;
	scanf_s("%d %d", &l, &r);

	int maxx = a[l - 1];
	int maxn = l;
	for (int i = l; i < r; ++i) {
		if (a[i] > maxx) {
			maxx = a[i];
			maxn = i + 1;
		}
	}
	printf("%d %d", maxx, maxn);

	return 0;
}
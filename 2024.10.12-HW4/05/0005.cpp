#include <cstdio>
#include <cmath>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int a[1000]{ 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}
	int x = 0;
	scanf_s("%d", &x);

	int eps = abs(a[0] - x);
	int ans = a[0];
	for (int i = 1; i < n; ++i) {
		if (abs(a[i] - x) < eps || abs(a[i] - x) == eps and a[i] < ans) {
			eps = abs(a[i] - x);
			ans = a[i];
		}
	}
	printf("%d", ans);

	return 0;
}
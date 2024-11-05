#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);

	int a[1000] = { 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}

	int maxx = a[0];
	for (int i = 1; i < n; ++i) {
		if (a[i] > maxx) {
			maxx = a[i];
		}
	}

	int minn = a[0];
	for (int i = 1; i < n; ++i) {
		if (a[i] < minn) {
			minn = a[i];
		}
	}

	for (int i = 0; i < n; ++i) {
		if (a[i] == maxx) {
			a[i] = minn;
		}
	}

	for (int i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}

	return 0;
}
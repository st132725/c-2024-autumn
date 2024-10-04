#include<cstdio>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int count = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int c = 0;
			scanf_s("%d", &c);
			if (c == 1) {
				++count;
			}
		}
	}
	printf("%d", count / 2);

	return 0;
}
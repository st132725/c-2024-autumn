#include<cstdio>

int main(int argc, char* argv[]) {
	int a = 0, b = 0, j = 0, k = 0;
	scanf_s("%d", &a);
	for (int i = 0; i < a; ++i) {
		scanf_s("%d", &b);
		if (b > 0) {
			j++;
		}
		else {
			j = 0;
		}
		if (j > k) {
			k = j;
		}
	}
	printf("%d", k);
}
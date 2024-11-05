#include<iostream>

int main(int argc, char* arg[]) {
	int n = 0;
	int m = 0;
	std::cin >> n >> m;
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}
	int* b = (int*)malloc(m * sizeof(int));
	for (int i = 0; i < m; ++i) {
		scanf_s("%d", b + i);
	}

	int k = 0;
	if (n >= m) {
		k = n;
	}
	else {
		k = m;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {

		}
	}
	

	free(a);
	free(b);

	return 0;
}
#include<cstdio>

int main(int argc, char* argv[]) {
	long long a = 0, b = 0, c = 0, d = 0;
	scanf_s("%lld %lld %lld %lld", &a, &b, &c, &d);
	for (int x =-100; x <= 100; ++x) {
		if (a * x * x * x + b * x * x + c * x + d == 0) {
			printf("%d ", x);
		}
	}

	return 0;
}
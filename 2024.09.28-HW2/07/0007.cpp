#include<cstdio>

int main(int argc, char* argv[]) {
    int k = 0, m = 0, n = 0;
    scanf_s("%d %d %d", &k, &m, &n);
    if (n % k == 0) {
        printf("%d", (n / k) * 2 * m);
    }
    else if ((n % k) <= (k / 2) && (n / k) > 0) {
        printf("%d", (n / k + 1) * 2 * m - m);
    }
    else {
        printf("%d", (n / k + 1) * 2 * m);
    }

    return 0;
}
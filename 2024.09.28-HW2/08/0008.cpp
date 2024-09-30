#include <iostream>

int main(int argc, char argv[]) {
    int n = 0, m = 0;
    scanf_s("%d %d", &n, &m);
    int p = ((n + 1) * m) + ((m + 1) * n);
    int s = n + m;
    if ((n == 1) || (m == 1)) {
        printf("%d", n * m * 4);
    }
    else if ((n % 2 == 0) || (m % 2 == 0)) {
        printf("%d", p + s);
    }
    else {
        printf("%d", p + s - 2);
    }

    return 0;
}
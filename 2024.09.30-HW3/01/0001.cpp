#include<cstdio>

int main(int argc, char* argv[]) {
    int n = 0;
    scanf_s("%d", &n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        int c = 0;
        scanf_s("%d", &c);
        if (c == 0) {
            count += 1;
        }
    }
    if (n / 2 < count) {
        printf("%d", n - count);
    }
    else {
        printf("%d", count);
    }

    return 0;
}
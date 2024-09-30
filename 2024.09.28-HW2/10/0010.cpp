#include<cstdio>

int main(int argc, char* argv[]) {
    int n = 0;
    scanf_s("%d", &n);
    switch (n % 5) {
    case 0:
        printf("%d %d", n / 5, 0);
        return 0;
    case 1:
        printf("%d %d", n / 5 - 1, 2);
        return 0;
    case 2:
        printf("%d %d", n / 5 - 2, 4);
        return 0;
    case 3:
        printf("%d %d", n / 5, 1);
        return 0;
    case 4:
        printf("%d %d", n / 5 - 1, 3);
        return 0;
    }

    return 0;
}
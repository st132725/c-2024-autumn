#include<cstdio>

int main(int argc, char* argv[]) {

    int k = 0, w = 0;
    scanf_s("%d %d", &k, &w);
    int a1 = 0, b1 = 0, a2 = 0, b2 = 0, a3 = 0, b3 = 0;
    scanf_s("%d %d %d %d %d %d", &a1, &b1, &a2, &b2, &a3, &b3);

    if ((a1 <= w && b1 >= k)) {
        printf("YES");
    }
    else if (a2 <= w && b2 >= k) {
        printf("YES");
    }
    else if (a3 <= w && b3 >= k) {
        printf("YES");
    }
    else if ((a1 + a2) <= w && (b1 + b2) >= k) {
        printf("YES");
    }
    else if ((a1 + a3) <= w && (b1 + b3) >= k) {
        printf("YES");
    }
    else if ((a3 + a2) <= w && (b3 + b2) >= k) {
        printf("YES");
    }
    else if ((a1 + a3 + a2) <= w && (b1 + b3 + b2) >= k) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}
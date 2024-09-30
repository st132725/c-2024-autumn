#include<cstdio>
#include<cmath>

int main(int argc, char argv[]) {
    long long a = 0, b = 0, c = 0;
    scanf_s("%lld %lld %lld", &a, &b, &c);
    double d = (b * b) - (4 * a * c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("-1");
            }
            else {
                printf("0");
            }
        }
        else {
            printf("1\n%f", -c / (double)b);
        }
    }
    else if (d > 0) {
        printf("2\n%f\n%f", (-b + sqrt(d)) / (double)(2 * a), (-b - sqrt(d)) / (double)(2 * a));
    }
    else if (d == 0) {
        printf("1\n%f", -b / (2 * (double)a));
    }
    else if (d < 0) {
        printf("0");
    }

    return 0;
}
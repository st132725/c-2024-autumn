#include <iostream>

int main(int argc, char* argv[]) {
    int c = 0;
    int b = 0;
    int a = 0;
    scanf_s("%d%d%d", &c, &b, &a);
    c = c + (((b - a) - c % (b - a)) % (b - a));
    c = (c - b) * ((c / b) - ((c - b) / b));
    c = c + (((b - a) - c % (b - a)) % (b - a));
    int d = 1 + c / (b - a);
    printf("%d", d);

    return EXIT_SUCCESS;
}
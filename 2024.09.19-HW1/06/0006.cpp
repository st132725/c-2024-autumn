#include <iostream>

int main(int argc, char* argv[])
{
    int c = 0;
    int b = 0;
    scanf_s("%d%d", &c, &b);
    int a = c + b - 1;
    printf("%d %d", a - c, a - b);

    return EXIT_SUCCESS;
}
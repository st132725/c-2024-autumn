#include <iostream>

int main(int argc, char* argv[])
{
    int c = 0;
    int b = 0;
    scanf_s("%d%d", &c, &b);
    printf("%d", ((c * b % 109) + 109) % 109 + 1);

    return EXIT_SUCCESS;
}
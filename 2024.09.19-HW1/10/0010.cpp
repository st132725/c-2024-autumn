#include <iostream>

int main(int argc, char* argv[])
{
    int c = 0;
    scanf_s("%d", &c);
    printf("%d %d %d", c / 6, 4 * (c / 6), c / 6);

    return EXIT_SUCCESS;
}
#include <iostream>

int main(int argc, char* argv[])
{
    int c = 0;
    scanf_s("%d", &c);
    printf("%d", (c % 10) + (c / 10 % 10) + (c / 100 % 100));

    return EXIT_SUCCESS;
}
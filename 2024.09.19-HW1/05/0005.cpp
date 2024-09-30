#include <iostream>

int main(int argc, char* argv[])
{
    int c = 0;
    scanf_s("%d", &c);
    printf("%s%d%s%d%s", "The next number for the number ", c, " is ", c + 1, ". \n");
    printf("%s%d%s%d%s", "The previous number for the number ", c, " is ", c - 1, ".");

    return EXIT_SUCCESS;
}
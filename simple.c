#include <stdio.h>

int main(void)
{
    int n = 67;
    char *m = "Chicken";

    // print n and m
    printf("This is the value of n : %d, and this is the value of m : %s\n", n, m);

    //check if n is true
    if (n) {
        printf("%d is a true number!\n", n);
    }

    // check if n is odd or even
    printf("The number %d is %s.\n", n, n % 2 == 0? "even":"odd");

    return 0;
}
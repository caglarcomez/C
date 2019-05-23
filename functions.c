#include <stdio.h>
#include <cs50.h>

//declare functions ******
int add_two_ints(int a, int b);

int main(void)
{
    printf("integer x: ");
    int x = get_int();
    printf("integer y: ");
    int y = get_int();

    int z = add_two_ints(x, y);

    printf("Sum of %i and %i is %i\n", x, y, z);
}

int add_two_ints(int a, int b)
{
    return a + b;
}
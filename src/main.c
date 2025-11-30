#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    printf("Hello from C! 2 + 3 = %d\n", add(2, 3));
    printf("Hello from C! 10 + 5 = %d\n", add(10, 5));
    printf("Hello from C! 20 + 10 = %d\n", add(20, 10));
    return 0;
}

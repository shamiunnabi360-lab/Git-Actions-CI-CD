#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    printf("Summation of the numbers is 2 + 3 = %d\n", add(2, 3));
    printf("Summation of the number is 10 + 5 = %d\n", add(10, 5));
    printf("Summation of the number is 20 + 10 = %d\n", add(20, 10));

return 0;
}

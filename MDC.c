#include <stdio.h>
int maximodiv(int a, int b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int r;
    do
    {
        r = a % b;
        printf("%d,%d\n", a, b);
        a = b;
        b = r;
    } while (b != 0);
    printf("MDC = %d", a);
}
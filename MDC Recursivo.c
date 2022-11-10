#include <stdio.h>
int maximodiv(int a, int b, int r);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("MDC = %d", maximodiv(a, b, b));
}

int maximodiv(int a, int b, int r)
{
    if (r == 0)
        return a;

    r = (a % b);
    printf("%d,%d\n", a, b);

    /*a=b;
    b=r;*/
    maximodiv(b, r, r);
}
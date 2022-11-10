#include <stdio.h>
int maximodiv(int a, int b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("MDC = %d", maximodiv(a, b));
}

int maximodiv(int a, int b)
{
    int r = (a % b);
    printf("%d,%d\n", a, b);

    /*a=b;
    b=r;*/
    if (r == 0)
        return b;
    maximodiv(b, r);
}
/*
* Equação de recorrência: 
* {O(1) se aMODb=0
* {t(b, a%b)+f(a) caso contrario
*/
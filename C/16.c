/* Tinh S = 1 + 1/(1+2) + 1/(1+2+3) +...+ 1/(1+2+3+...+n) */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n < 1)
        {
            printf("Yeu cap nhap n >= 1, nhap lai n!\n");
        }
    } while (n < 1);
    float Sum = 0;
    float s = 0;
    int i = 1;
    while (i <= n)
    {
        s = s + i;
        Sum = Sum + 1.0/s;
        i++;
    }
    printf("S = %.2f", Sum);
    return 0;
}
//C1:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x;
    printf("Nhap x: ");
    scanf("%f", &x);
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    double t;
    t = pow(x,n);
    printf("T = %.0f^%d = %.0lf",x, n, t);
    return 0;
}
//C2:
#include <stdio.h>
#include <math.h>
double Power(float x, int n);

int main()
{
    float x;
    printf("Nhap co so x: ");
    scanf("%f", &x);
    int n;
    printf("Nhap so mu n: ");
    scanf("%d", &n);
    double t;
    t = Power(x, n);
    printf("%.0f^%d = %.0lf", x, n, t);
    return 0;
}
double Power(float x, int n)
{
    float result = 1;
    while (n--)
    {
        result*= x;
    }
    return result;
}
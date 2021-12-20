#include <stdio.h>



int main() {
    int a, b, c, d, e, f;
    printf("Nhap a, c va e: \n");
    scanf("%d%d%d", &a, &c, &e);
    do {
        printf("Nhap b, d va f: \n");
        scanf("%d%d%d", &b, &d, &f);
        if (b && d && f == 0)
            printf("Ban phai nhap mau so khac 0, hay nhap lai.\n");
    } while (b && d && f == 0);
    
    return 0;
}


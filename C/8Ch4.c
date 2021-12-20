#include <stdio.h>
#include <string.h>

int Xuatchu(int n);

int main() {
    int N;
    do {
        printf("Nhap so nguyen N: ");
        scanf("%d", &N);
        if (N < 0 || N > 1000)
            printf("Nhap N trong khoang (0,1000), ban hay nhap lai.\n");
    } while (N < 0 || N > 1000);
    printf("doc: ");
    Xuatchu(N);
    return 0;
}

int Xuatchu(int n) {
    int a = n % 10; //lay hang don vi.
    int b = (n / 10) % 10; //lay hang chuc.
    int c = n / 100; //lay hang tram.
    switch (c) {
    case 1: printf("mot tram "); break;
    case 2: printf("hai tram "); break;
    case 3: printf("ba tram "); break;
    case 4: printf("bon tram "); break;
    case 5: printf("nam tram "); break;
    case 6: printf("sau tram "); break;
    case 7: printf("bay tram "); break;
    case 8: printf("tam tram "); break;
    case 9: printf("chin tram "); break;
    }
    if (b % 10 == 0 && a != 0) //neu hang chuc = 0.
        printf("le ");
    switch (b) {
    case 1: printf("muoi "); break;
    case 2: printf("hai muoi "); break;
    case 3: printf("ba muoi "); break;
    case 4: printf("bon muoi "); break;
    case 5: printf("nam muoi "); break;
    case 6: printf("sau muoi "); break;
    case 7: printf("bay muoi "); break;
    case 8: printf("tam muoi "); break;
    case 9: printf("chin muoi "); break;
    }
    switch (a) {
    case 1: printf("mot"); break;
    case 2: printf("hai"); break;
    case 3: printf("ba"); break;
    case 4: printf("bon"); break;
    case 5: printf("lam"); break;
    case 6: printf("sau"); break;
    case 7: printf("bay"); break;
    case 8: printf("tam"); break;
    case 9: printf("chin"); break;
    }
    return 1;
}
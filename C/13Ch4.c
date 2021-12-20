#include <stdio.h>



int main() {
    int n, m;
    do {
        printf("Nhap m va n: \n");
        scanf("%d%d", &m, &n);
        if (n && m <= 0)
            printf("Ban phai nhap m, n > 0, hay nhap lai.\n");
    } while (n && m <= 0);
    
    return 0;
}


int Songuyento(int a, int b) {
    int dem = 0;
    int mark = 0;
    for (int i = 2; i <= b; i++) {
        if (b % i == 0)
            mark = 0;
        else
            printf("%d  ", i);
            mark = 1;
    }
    if (mark == 1) {
        
    }
}
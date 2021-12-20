#include <stdio.h>

void Xuat5chuSo(int dv, int c, int t, int n, int cn);

int main() {
    int hdv, hc, ht, hn, hcn;
    printf("Cac so co 5 chu so va co 2 chu nhau bang nhau la: \n");
    Xuat5chuSo(hdv, hc, ht, hn, hcn);
    return 0;
}

void Xuat5chuSo(int dv, int c, int t, int n, int cn) {
    for (long int i = 10000; i <= 20000 ; i++) {
        dv = i % 10;
        c = (i / 10) % 10;
        t = (i / 100) % 10;
        n = (i / 1000) % 10;
        cn = (i / 10000) % 10;
        if (dv == c && dv != t && dv != n && dv != cn || t == n && t != cn && t != c || dv == cn && dv != c)
            printf("%ld\t", i);
    }
}
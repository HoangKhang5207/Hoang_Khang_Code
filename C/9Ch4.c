#include <stdio.h>
#include <math.h>

int TimMax(int m);

int main() {
    int M;
    printf("Nhap M: ");
    scanf("%d", &M);
    TimMax(M);
    return 0;
}

int TimMax(int m) {
    int nMax;
    nMax = (int)((sqrt(8 * m + 1)-1)/2); //nMax la nghiem cua pt "S < m". 
    if (nMax * (nMax + 1) / 2 == m) //S = 1 + 2 + 3 +...+ n = n*(n+1)/2.
        printf("Gia tri n max de 1 + 2 + 3 +...+ n < %d la %d.", m, nMax - 1);
    else
        printf("Gia tri n max de 1 + 2 + 3 +...+ n < %d la %d.", m, nMax);
    return 1;
}
#include <stdio.h>
#include <string.h>
//============================================================
struct Hoca
{
    char loaica[30];
    char loainuoc[50];
    float temp;
    char denmau;
    int soluongca;
};
//===============================================================
void Fishpool(struct Hoca poorpool);
//===============================================================
int main()
{
    struct Hoca Horich;
    struct Hoca Hopoor;

    strcpy(Horich.loaica, "Ca Dieu Hong");
    strcpy(Horich.loainuoc, "Nuoc trong trang non na =)))");
    Horich.temp = 30.678;
    Horich.denmau = 'B';
    Horich.soluongca = 10;

    printf("Loai ca trong ho: %s\n", Horich.loaica);
    printf("Loai nuoc trong ho: %s\n", Horich.loainuoc);
    printf("Nhiet do ho ca: %.2f\n", Horich.temp);
    printf("Den mau trong ho: %c\n", Horich.denmau);
    printf("So luong ca trong ho: %d\n", Horich.soluongca);
    printf("\n");

    Fishpool(Hopoor);

    return 0;
}
//=================================================================
void Fishpool(struct Hoca poorpool)
{
    strcpy(poorpool.loaica, "Ca Ba Duoi");
    strcpy(poorpool.loainuoc, "Nuoc den thui , ca chet het :))))");
    poorpool.temp = 12.369;
    poorpool.denmau = 'G';
    poorpool.soluongca = 1;

    printf("Loai ca trong ho: %s\n", poorpool.loaica);
    printf("Loai nuoc trong ho: %s\n", poorpool.loainuoc);
    printf("Nhiet do ho ca: %.2f\n", poorpool.temp);
    printf("Den mau trong ho: %c\n", poorpool.denmau);
    printf("So luong ca trong ho: %d", poorpool.soluongca);
}
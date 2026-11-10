#include <stdio.h>

int main(void)
{
    int total_detik;
    int jam;
    int menit;
    int detik;
    int sisa;

    printf("Masukkan total detik: ");
    scanf("%d", &total_detik);

    jam   = total_detik / 3600; 
    sisa  = total_detik % 3600;
    menit = sisa / 60;
    detik = sisa % 60;

    printf("\nHASIL PERHITUNGAN\n");
    printf("%d detik setara dengan:\n", total_detik);
    printf("jam %d\n", jam);
    printf("menit %d\n", menit);
    printf("detik %d\n", detik);

    return 0;
}
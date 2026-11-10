#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int pemain, komputer;
    int menang = 0, kalah = 0, seri = 0;
    char lanjut1;

    srand(time(NULL));

        printf("\n=======GAME BATU GUNTING KERTAS=======");
        do
        {
            printf("\n\nPilih pilihanmu:");
            printf("\n1. Batu");
            printf("\n2. Gunting");
            printf("\n3. Kertas");
            printf("\nPilihan kamu: ");
            scanf("%d", &pemain);

            if(pemain < 1 || pemain > 3){
                printf("\nPilihan tidak valid!");
                continue;
            }

            komputer = rand() % 3 + 1;

            printf("pilihan komputer: ");

            switch(komputer)
            {
                case 1:
                    printf("Batu\n");
                    break;

                case 2:
                    printf("Gunting\n");
                    break;

                case 3:
                    printf("Kertas\n");
                    break;
            }

            if(pemain == komputer){
                printf("Hasilnya seri!!");
                seri++;
            }
            else if((pemain == 1 && komputer == 2) ||
            (pemain == 2 && komputer == 3) ||
            (pemain == 3 && komputer == 1)){
                printf("\nKamu menang!!!\n");
                menang++;
            }
            else{
                printf("\nKamu kalah!!\n");
                kalah++;
            }

            printf("\n\nSkor sementara:");
            printf("\nSeri: %d kali", seri);
            printf("\nMenang: %d kali", menang);
            printf("\nKalah: %d kali", kalah);

            printf("\n\napakah kamu ingin bermain lagi?");
            printf("\nketik 'y' atau 'Y' untuk lanjut");
            printf("\nketik apa saja untuk lihat hasil akhir : ");
            scanf(" %c", &lanjut1);

        } while(lanjut1 == 'y' || lanjut1 == 'Y');

        printf("\n\n=====HASIL AKHIR=====");
        printf("\nSeri sebanyak %d kali", seri);
        printf("\nPemain menang sebanyak %d kali", menang);
        printf("\nKomputer menang sebanyak %d kali", kalah);
        printf("\nTotal ronde dimainkan sebanyak %d ronde", seri + menang + kalah);
        printf("\n\nTERIMA KASIH SUDAH BERMAIN!");

    return 0;
}
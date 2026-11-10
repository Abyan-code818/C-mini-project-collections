#include <stdio.h>

int main(){
    int choicek1, choicek2;
    int angka, angka1, angka2;
    double hasil, hasil1;
    char operator, lanjut;

    printf("\n\n\t===KALKULATOR MULTIFUNGSI===\n");
        printf("\n\nApakah anda ingin kalkulator biasa atau kalkulator beruntun?");
        printf("\n1. Kalkulator biasa");
        printf("\n2. Kalkulator beruntun");

        printf("\nPilihan anda: ");
        scanf("%d", &choicek1);

        switch(choicek1)
        {
            case 1:
            printf("\nkamu memilih kalkulator biasa!");
            printf("\nSilahkan pilih operator:");
            printf("\n1. pertambahan (+) ");
            printf("\n2. pengurangan (-) ");
            printf("\n3. perkalian (*) ");
            printf("\n4. pembagian (/) ");

            printf("\nPilihan dalam angka: ");
            scanf("%d", &choicek2);

            printf("\nmasukkan angka pertama: ");
            scanf("%d", &angka1);

            printf("masukkan angka pertama: ");
            scanf("%d", &angka2);

            if(choicek2 == 1){
                hasil = angka1 + angka2;
                printf("\nhasilnya adalah: %.2f\nTerima kasih telah menggunakan program ini!", hasil);
            } else if(choicek2 == 2){
                hasil = angka1 - angka2;
                printf("\nhasilnya adalah: %.2f\nTerima kasih telah menggunakan program ini!", hasil);
            } else if(choicek2 == 3){
                hasil = angka1 * angka2;
                printf("\nhasilnya adalah: %.2f\nTerima kasih telah menggunakan program ini!", hasil);
            } else if(choicek2 == 4){
                hasil = angka1 / angka2;
                printf("\nhasilnya adalah: %.2f\nTerima kasih telah menggunakan program ini!", hasil);
            } 

            break;

            case 2:
            printf("\n\n\n\tkamu memilih kalkulator beruntun!");
            printf("\n\nmasukkan angka: ");
            scanf("%lf", &hasil1);

            do
            {
                printf("\nsilahkan pilih operator (+,-,*,/): ");
                scanf(" %c", &operator);

                printf("\nsilahkan masukkan angka: ");
                scanf("%d", &angka);

                switch(operator)
                {
                    case '+':
                        hasil1 += angka;
                    break;

                    case '-':
                        hasil1 -= angka;
                    break;

                    case '*':
                        hasil1 *= angka;
                    break;

                    case '/':
                        hasil1 /= angka;
                    break;
                }

                printf("\napakah anda ingin lanjut?");
                printf("\n(y/n): ");
                scanf(" %c", &lanjut);

            } while (lanjut == 'y' || lanjut == 'Y');

            printf("\nhasil akhir: %.2f\nTerima kasih telah menggunakan program ini!!", hasil1);
        }

    return 0;
}
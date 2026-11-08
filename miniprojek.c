#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int choice;

    //kalkulator multifungsi
    int choicek1, choicek2, hasil1;
    int angka, angka1, angka2;
    double hasil;
    char operator, lanjut;

    //game batu gunting kertas
    int pemain, komputer;
    int menang = 0, kalah = 0, seri = 0;
    char lanjut1;

    //sistem penghitung nilai mahasiswa
    int n, i, nim[100], nilai[100];
    int total = 0, input = 0, lulus = 0, xlulus= 0, tertinggi = 0, terendah = 100;
    char nama[100][50], grade[100];
    double rataRata;

    //aplikasi pencatat pengeluaran
    int i1, sisa_anggaran, anggaran_berjalan, anggaran_bertambah, anggaran, pilihan, nominal[100], input1 = 0;
    int total_keluar = 0;
    char keterangan[100][50];

    printf("\n\n========C PROJECT COLLECTION========");
    printf("\n1. Kalkulator multifungsi");
    printf("\n2. Game batu gunting kertas");
    printf("\n3. Sistem penghitung nilai mahasiswa");
    printf("\n4. Aplikasi pencatat pengeluaran");
    printf("\n0. Keluar");

    printf("\n\nmasukkan pilihan anda: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
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
                printf("\nhasilnya adalah: %.2f", hasil);
            } else if(choicek2 == 2){
                hasil = angka1 - angka2;
                printf("\nhasilnya adalah: %.2f", hasil);
            } else if(choicek2 == 3){
                hasil = angka1 * angka2;
                printf("\nhasilnya adalah: %.2f", hasil);
            } else if(choicek2 == 4){
                hasil = angka1 / angka2;
                printf("\nhasilnya adalah: %.2f", hasil);
            } 

            break;

            case 2:
            printf("\n\n\n\tkamu memilih kalkulator beruntun!");
            printf("\n\nmasukkan angka: ");
            scanf("%d", &hasil1);

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

            printf("hasil akhir: %d", hasil1);

            break;
        }

        break;

        case 2:

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

            printf("\napakah kamu ingin bermain lagi?");
            printf("\n(y/n): ");
            scanf(" %c", &lanjut1);

        } while(lanjut1 == 'y' || lanjut1 == 'Y');

        printf("\n\n=====HASIL AKHIR=====");
        printf("\nSeri sebanyak %d kali", seri);
        printf("\nPemain menang sebanyak %d kali", menang);
        printf("\nKomputer menang sebanyak %d kali", kalah);
        printf("\nTotal ronde dimainkan sebanyak %d ronde", seri + menang + kalah);
        printf("\n\nTERIMA KASIH SUDAH BERMAIN!");

        break;

        case 3:
        printf("\n\n===PENGHITUNG NILAI MAHASISWA===");
        printf("\n\nsilahkan masukkan jumlah mahasiswa");
        printf("\npilihan anda: ");
        scanf("%d", &n);

        if(n <= 0){
            printf("jumlah input tidak valid!");
        } else {
            for(i = 1; i <= n; i++){
                printf("\nData ke-%d: ", i);
                printf("\nNama: ");
                scanf("%49s", nama[i - 1]);

                printf("NIM: ");
                scanf("%d", &nim[i - 1]);

                printf("Nilai: ");
                scanf("%d", &nilai[i - 1]);

                if(nilai[i - 1] >= 85){
                    grade[i - 1] = 'A';
                    printf("grade: %c\n", grade[i - 1]);
                } else if(nilai[i - 1] >= 75){
                    grade[i - 1] = 'B';
                    printf("grade: %c\n", grade[i - 1]);
                } else if(nilai[i - 1] >= 65){
                    grade[i - 1] = 'C';
                    printf("grade: %c\n", grade[i - 1]);
                } else if(nilai[i - 1] >= 50){
                    grade[i - 1] = 'D';
                    printf("grade: %c\n", grade[i - 1]);
                } else {
                    grade[i - 1] = 'E';
                    printf("grade: %c\n", grade[i - 1]);
                }

                input++;
                total += nilai[i - 1];

                if(nilai[i - 1] > tertinggi){
                    tertinggi = nilai[i - 1];
                }
                if(nilai[i - 1] < terendah){
                    terendah = nilai[i - 1];
                }

                if(nilai[i - 1] >= 75){
                    lulus++;
                } else {
                    xlulus++;
                }
            }
        }

        rataRata = (double) total / n;

        printf("\n\n-----REKAP HASIL AKHIR-----");
        printf("\njumlah input: %d input", input);
        printf("\ntotal nilai: %d", total);
        printf("\nnilai tertinggi: %d", tertinggi);
        printf("\nnilai terendah: %d", terendah);
        printf("\njumlah lulus: %d", lulus);
        printf("\njumlah tidak lulus: %d", xlulus);
        printf("\nrata-rata nilai: %.2f\n", rataRata);

        printf("\n\n-----REKAP DATA MAHASISWA-----");
        for(i = 0; i < n; i++){
            printf("\nData Mahasiswa ke-%d ", i + 1);
            printf("\nNama            : %s", nama[i]);
            printf("\nNIM             : %d", nim[i]);
            printf("\nNilai           : %d", nilai[i]);
            printf("\nGrade           : %c\n", grade[i]);
        }

        break;

        case 4:

        printf("\nmasukkan anggaran: ");
        scanf("%d", &anggaran);

        anggaran_berjalan = anggaran;

        do
        {
            atas:
            printf("\n\n\n=====APLIKASI PENCATAT PENGELUARAN=====");
            printf("\n\nAnggaran: Rp%d\n", anggaran_berjalan);

            printf("\n1. Tambah pengeluaran");
            printf("\n2. Lihat riwayat");
            printf("\n3. Lihat ringkasan");
            printf("\n4. Tambah anggaran");
            printf("\n5. Keluar");
            printf("\nPilihan: ");
            scanf("%d", &pilihan);

            switch(pilihan)
            {
                case 1: 

                    printf("\nCatatan ke %d", input1 + 1);
                    printf("\nKeterangan: ");
                    scanf("%49s[^\n]", keterangan[input1]);

                    printf("Nominal: ");
                    scanf("%d", &nominal[input1]);

                    printf("\n\nPengeluaran kamu berhasil dicatat!");
                    total_keluar += nominal[input1];
                    anggaran_berjalan -= nominal[input1];

                    input1++;

                break;

                case 2:

                    if(input1 == 0){
                        printf("anda belum input sama sekali!");
                        goto atas;
                    } else {
                        for(i1 = 0; i1 < input1; i1++){
                            printf("\n\nCatatan ke:%d", i1 + 1);
                            printf("\nKeterangan: %s", keterangan[i1]);
                            printf("\nNominal: %d", nominal[i1]);
                        }
                    }

                break;

                case 3:
                    sisa_anggaran = anggaran - total_keluar; 
                
                    printf("\n\n=====RINGKASAN DATA=====");
                    printf("\nAnggaran awal: Rp%d", anggaran);
                    printf("\nTotal pengeluaran: Rp%d", total_keluar);
                    printf("\nSisa anggaran: Rp%d", sisa_anggaran);

                break;

                case 4:
                    printf("\nMasukkan jumlah untuk menambah pengeluaran : ");
                    scanf("%d", &anggaran_bertambah);
                    anggaran_berjalan += anggaran_bertambah;

                    printf("\nPenambahan anggaran berhasil!!");

                break;

                case 5:
                    printf("\nTerima kasih telah menggunakan program ini!");
                
                break;

                default:
                    printf("Tolong masukkan input yang benar!!");
        

                break;
            }
        } while(pilihan != 5);

        break;
    }

    return 0;
}
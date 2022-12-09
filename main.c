#include <stdio.h>

int main() {
  float nilai;
  char nilai_huruf, lagi;
  char nama[20], NIM[15], kel[5];
ulangi:
  system("cls");
  printf("\nNilai UTS Mahasiswa");
  printf("\nNama : ");
  gets(nama);
  printf("\nNIM : ");
  gets(NIM);
  printf("Kelompok : ");
  gets(kel);

  printf("Masukkan Nilai : ");
  scanf("%f", &nilai);
  if (nilai >= 76.00 && nilai <= 100.00) {
    printf("Nilai Anda: A");
    nilai_huruf = 'A';
  } else if (nilai >= 66.00 && nilai <= 75.00) {
    printf("Nilai Anda: B");
    nilai_huruf = 'B';
  } else if (nilai >= 51.00 && nilai <= 65.00) {
    printf("Nilai Anda: C");
    nilai_huruf = 'C';
  } else if (nilai >= 0.00 && nilai <= 50.00) {
    printf("Nilai Anda: D");
    nilai_huruf = 'D';
  } else {
    printf("Maaf, Anda Tidak Punya Nilai!");
    nilai_huruf = '-';
  }

  switch (nilai_huruf) {
  case 'A':
    printf("\nPertahankan");
    break;
  case 'B':
    printf("\nHarus lebih baik lagi!");
    break;
  case 'C':
    printf("\nHarus banyak belajar!");
    break;
  case 'D':
    printf("\nJangan keseringan main!");
    break;
  default:
    printf("\nMaaf, Anda Tidak Punya Nilai!");
  }

  printf("\nCoba lagi? (y/n) : ");
  scanf("%s", &lagi);
  if (lagi == 'y') {
    goto ulangi;
  } else {
    printf("Terimakasih, Tekan Enter Untuk Selesai.");
  }
}
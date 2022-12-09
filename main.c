#include <stdio.h>

int main() {
  float nilai;
  char nilai_huruf, lagi;
  char nama[20], NIM[15], kel[5];
ulangi:
  system("cls");
  printf("Input Nilai Mahasiswa");
  printf("Nama : ");
  gets(nama);
  printf("NIM : ");
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
    printf("\nSelamat Anda Lulus");
    break;
  case 'B':
    printf("\nSelamat Anda Lulus");
    break;
  case 'C':
    printf("\nSelamat Anda Lulus");
    break;
  case 'D':
    printf("\nAnda Tidak Lulus");
    break;
  default:
    printf("\nMaaf, Anda Tidak Punya Nilai!");
  }

  printf("\nInput ulang nilai? (y/n) : ");
  scanf("%s", &lagi);
  if (lagi == 'y') {
    goto ulangi;
  } else {
    printf("Terimakasih, Tekan Enter Untuk Selesai.");
  }
}

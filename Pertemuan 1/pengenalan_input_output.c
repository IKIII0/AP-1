#include <stdio.h> //header untuk C

int main(){
    char nama[50], kom[2];
    int nim;
    float ip;
    // printf("hello world\n");

    printf("Masukkan Nama: "); gets(nama); //ini gets string untuk mengambil input berupa teks
    printf("Masukkan NIM: "); scanf("%d", &nim); getchar(); //getchar disini untuk menyerap sebuah karakter newline ketika kita enter
    printf("Masukkan KOM: "); gets(kom); //printf untuk menampilkan 
    printf("Masukkan IP: "); scanf("%f", &ip); //scanf untuk menginput

    printf("Nama: "); puts(nama);
    printf("NIM: %d\n", nim);
    printf("KOM: "); puts(kom);
    printf("IP: %f", ip);    
}

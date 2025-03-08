#include <stdio.h> //header untuk C
#include <conio.h>

int main(){
    char nama[50], kom[2];
    int nim;
    float ip;
    // printf("hello world\n");

    printf("Masukkan Nama: "); gets(nama); //ini gets string
    printf("Masukkan NIM: "); scanf("%d", &nim); getchar();
    printf("Masukkan KOM: "); gets(kom); 
    printf("Masukkan IP: "); scanf("%f", &ip);

    printf("Nama: "); puts(nama);
    printf("NIM: %d\n", nim);
    printf("KOM: "); puts(kom);
    printf("IP: %f", ip);



    
}
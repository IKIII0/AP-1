#include <iostream> // header untuk cipupus
#include <conio.h> //header untuk getche() dan getch
using namespace std;

int main(){
    string nama,nim;
    char kom, jenis_kelamin;
    float ip;
    /*
    ini untuk komentar beberapa baris
    */
   cout<<"Masukkan nama: ";//cin>>nama; 
   getline(cin, nama); //agar karakter spasi bisa terbaca
   cout<<"Masukkan NIM: ";cin>>nim; // cout untuk menampilkan
   cout<<"Masukkan Kom: ";cin>>kom; // cin untuk menginput
   cout<<"Masukkan IP: ";cin>>ip;

   cout<<"\nNama: "<<nama<<endl;
   cout<<"NIM: "<<nim<<endl;
   cout<<"KOM: "<<kom<<endl;
   cout<<"IP: "<<ip<<endl;

   cout<<"Masukkan jenis kelamin L/P: "; jenis_kelamin = getche(); //agar input nya langsung tampil gaperlu enter lagi
   cout<<"\nJenis Kelamin: "; putchar(jenis_kelamin); //untuk nampilin getche itu
   
   getch(); //karakter yang diketik gak bakal ditampilin di output


}


#include <iostream> //header cipupus/cpp
#include <string> //header string
using namespace std; //biar gak pakau std
//deklarasi struct:
struct mahasiswa{
    string nama;
    int umur;
    float ipk;
};

int main(){
    system("cls");
    mahasiswa mhs1; //mendeklarasikan struct di program utama
    //menginisialisasi isi dari struct mahasiswa yang sudah disimpan di mhs1
    mhs1.nama = "Rifki"; 
    mhs1.umur = 18;
    mhs1.ipk = 4.0;
    //menampilkan isi struct mengguankan tanda ( . )
    // cout << "Nama: " << mhs1.nama << endl;
    // cout << "Umur: " << mhs1.umur << endl;
    // cout << "IPK: " << mhs1.ipk << endl;

    //menampilkan isi struct menggunakan pointer dan tanda ( -> )
    mahasiswa *ptmhs = &mhs1;
    cout << "Nama: " << ptmhs->nama << endl;
    cout << "Umur: " << ptmhs->umur << endl;  
    cout << "IPK: " << ptmhs->ipk << endl;
}

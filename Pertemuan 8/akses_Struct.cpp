#include <iostream>
#include <string>
using namespace std;
struct mahasiswa{
    string nama;
    int umur;
    float ipk;
};

int main(){
    system("cls");
    mahasiswa mhs1;   
    mhs1.nama = "Rifki";
    mhs1.umur = 18;
    mhs1.ipk = 4.0;
    // cout << "Nama: " << mhs1.nama << endl;
    // cout << "Umur: " << mhs1.umur << endl;
    // cout << "IPK: " << mhs1.ipk << endl;

    mahasiswa *ptmhs = &mhs1;
    cout << "Nama: " << ptmhs->nama << endl;
    cout << "Umur: " << ptmhs->umur << endl;  
    cout << "IPK: " << ptmhs->ipk << endl;
}
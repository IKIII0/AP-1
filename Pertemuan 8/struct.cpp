#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct alamat{
    string jalan;
    string kota;
    int kode_pos;
};

struct mahasiswa{
    string nama;
    int umur;
    float ipk;
    alamat alamat_mhs; // Nested struct
};


int main(){
    system("cls");
    mahasiswa mhs1;   
    // mhs1.nama = "Rifki";
    // mhs1.umur = 18;
    // mhs1.ipk = 4.0;

    // mhs1.alamat_mhs.jalan = "Pulo brayan darat II";
    // mhs1.alamat_mhs.kota = "Medan";
    // mhs1.alamat_mhs.kode_pos = 12345;

    // cout << "Alamat: " << mhs1.alamat_mhs.jalan <<" "<< mhs1.alamat_mhs.kota<< " " << mhs1.alamat_mhs.kode_pos << endl;

    vector<mahasiswa> mhs;
    int n;
    cout << "Masukkan jumlah mahasiswa: "; cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cin.get();
        cout << "Nama: "; getline(cin, mhs1.nama);
        cout << "Umur: "; cin>>mhs1.umur;
        cout << "IPK: "; cin>>mhs1.ipk;
        mhs.push_back(mhs1);
    }

    for (int i = 0; i < n; i++){
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "Umur: " << mhs[i].umur << endl;
        cout << "IPK: " << mhs[i].ipk << endl;
    }
}
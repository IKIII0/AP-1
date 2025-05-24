#include <iostream> //header cipupus/cpp
#include <string> //header string
#include <vector> //header vector
using namespace std; //biar gak pakai std
//mendeklarasikan struct untuk alamat
struct alamat{
    string jalan;
    string kota;
    int kode_pos;
};

//mendeklarasikan struct untuk identitas mahasiswa
struct mahasiswa{
    string nama;
    int umur;
    float ipk;
    alamat alamat_mhs; // Nested struct
};


int main(){
    system("cls"); //membersihkan tampilan
    mahasiswa mhs1;  //menginisialisai mhs1 dengan tipe data mahasiswa
    
    //mendeklarasikan isi struct
    // mhs1.nama = "Rifki";
    // mhs1.umur = 18;
    // mhs1.ipk = 4.0;
    
    //mendeklarasikan isi memakai nested struct 
    // mhs1.alamat_mhs.jalan = "Pulo brayan darat II";
    // mhs1.alamat_mhs.kota = "Medan";
    // mhs1.alamat_mhs.kode_pos = 12345;

    //menampilkan alamat mahasiswa
    // cout << "Alamat: " << mhs1.alamat_mhs.jalan <<" "<< mhs1.alamat_mhs.kota<< " " << mhs1.alamat_mhs.kode_pos << endl; 

    vector<mahasiswa> mhs; //mendeklarasikan vector
    int n;
    cout << "Masukkan jumlah mahasiswa: "; cin >> n;
    //looping untuk memasukkan data mahasiswa ke vector mhs dengan tipe data mahasiswa
    for (int i = 0; i < n; i++){
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cin.get();
        cout << "Nama: "; getline(cin, mhs1.nama);
        cout << "Umur: "; cin>>mhs1.umur;
        cout << "IPK: "; cin>>mhs1.ipk;
        mhs.push_back(mhs1); //push back untuk memasukkan data ke vector
    }
    //menampilkan isi vector
    for (int i = 0; i < n; i++){
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "Umur: " << mhs[i].umur << endl;
        cout << "IPK: " << mhs[i].ipk << endl;
    }
}

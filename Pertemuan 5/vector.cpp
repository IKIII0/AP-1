#include <iostream> //header cipupus/cpp
#include <vector> //header untuk vector
using namespace std;

int main(){
    //membuat vector
    vector<string> nama_karyawan = {"Rifki", "Dhafa", "Willy", "Rizky", "Kiel"};
    // cara simple menampilkan isi dari vector nama_karyawan
    // for (string n : nama_karyawan){
    //     cout<<n<<endl;
    // }

    // Add data to Vector
    nama_karyawan.push_back("Dapa");

    // for (string n : nama_karyawan){
        // cout<<n<<endl;
    // }

    // Delete from Vector
    nama_karyawan.pop_back();
    for (string n : nama_karyawan){
        cout<<n<<endl;
    };

    // kalau mau delete yang kita mau bukan dari belakang
    nama_karyawan.erase(nama_karyawan.begin() + 3);
    for (string n : nama_karyawan){
        cout<<n<<endl;
    };

}

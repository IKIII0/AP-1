#include <iostream> //header cipupus
using namespace std; //gak perlu buat std
//variabel global
string namaglobal = "Ilmu";

void namaVariabel(){
    //variabel lokal
    string namaLokal = "Komputer";
}

int main(){
    string nama = "geda";
    namaVariabel(); //memanggil fungsi
    cout<<namaglobal;
}

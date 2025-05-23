#include <iostream> //header cipupus/cpp
using namespace std; //gak memakai std berulang

int main(){
    string kalimat;
    int i;

    cout<<"Masukkan kalimat: "; getline(cin,kalimat); //getline untuk bisa membaca karakter spasi
    //for itu adalah perulangan
    for(i = 0; i <= kalimat.length(); i++){ // kalimat.length membaca panjang string kalimat
        kalimat[i] = toupper(kalimat[i]); //toupper untuk membuat semua kalimat jadi kapital atau huruf besar
    }
    cout<<"Kalimat dalam huruf kapital: "<<kalimat<<endl;
}

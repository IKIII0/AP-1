#include <iostream> // header cipupus/cpp
using namespace std; //tidak perlu memakai std
//membuat fungsi sapa dan memakai parameter formal
void sapa(string nama){
    cout<<"Halo "<<nama<<"! Selamat belajar CIPUPUS"<<endl;
}

int main(){
    string nama="IKI";
    //menampilkan fungsi tersebut dan memakai parameter aktual
    sapa(nama);
}

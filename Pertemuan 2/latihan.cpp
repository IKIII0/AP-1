#include <iostream> //header cipupus/cpp/c++
using namespace std; //untuk tidak perlu menggunakan std berulang lagi

int main(){
    float v,r,lp;

    cout<<"Masukkan Jari jari: ";cin>>r; //cin untuk input data
    v = (float(4)/3) * 3.14 * r * r * r;
    lp = 4 * 3.14 * r*r;
    cout<<"Hasil Volume: "<<v<<endl; //endl untuk newline atau enter kebawah
    cout<<"Hasil Luas Permukaan: "<<lp<<endl; //cout untuk nampilin data
}

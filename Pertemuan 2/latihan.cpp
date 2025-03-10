#include <iostream>
using namespace std;

int main(){
    float v,r,lp;

    cout<<"Masukkan Jari jari: ";cin>>r;
    v = (float(4)/3) * 3.14 * r * r * r;
    lp = 4 * 3.14 * r*r;
    cout<<"Hasil Volume: "<<v<<endl;
    cout<<"Hasil Luas Permukaan: "<<lp<<endl;
}
#include <iostream> //header cipupus
using namespace std; //gak pake std

int main(){
    string kalimat;
    int i;

    cout<<"Masukkan kalimat: "; getline(cin,kalimat); //getline bisa membaca karakter spasi
    //for perulangan 
    for(i = 0; i <= kalimat.length(); i++){ //kalimat.length = panjang string kalimat
        if (kalimat[i] == 'a' or kalimat[i] == 'i' or kalimat[i] == 'u' or kalimat[i] == 'e' or kalimat[i] == 'o'){
            kalimat[i] = toupper(kalimat[i]); //toupper membuat huruf jadi kapital
        }
    }
    cout<<"Kalimat dalam huruf kapital: "<<kalimat<<endl;
}

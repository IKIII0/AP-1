#include <iostream> //header cipupus
using namespace std; //biar ga perlu std berulang
int main(){
    int nilai;
    cout<<"Masukkan nilai: ";cin>>nilai; // cin untuk input

    if (nilai % 10 == 0){ //if untuk mengecek kondisi
        cout<<nilai<<" kelipatan 10"; // cout untuk nampilin
    }
    else if (nilai % 5 == 0){ //else if jika kondisi yang sebelumnya tidak terpenuhi
        cout<<nilai<<" kelipatan 5";
    }
    else{ //else jika semua kondisi tidak terpenuhi
        cout<<nilai<<" bukan keduanya";
    }
}


#include <iostream>

using namespace std;
int main(){
    int nilai;
    cout<<"Masukkan nilai: ";cin>>nilai;

    if (nilai % 10 == 0){
        cout<<nilai<<" kelipatan 10";
    }
    else if (nilai % 5 == 0){
        cout<<nilai<<" kelipatan 5";
    }
    else{
        cout<<nilai<<" bukan keduanya";
    }
}


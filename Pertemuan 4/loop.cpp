#include <iostream>
using namespace std;

int main(){
    // a:
    //     cout<<"Hello world"<<endl;
    //     goto d;
    // b:
    //     cout<<"Ilmu komputer"<<endl;
    //     return 0;
    // c:
    //     cout<<"Fasilkom-Ti"<<endl;
    //     goto b;
    // d:
    //     cout<<"IKLC"<<endl;
    //     goto c;

    // Menampilkan bilangan genap 10 --> 2 dengan goto
    // int i = 10;
    // genap:
    // if (i % 2 == 0){
    //     cout<< i << endl;
    // } i--;
    
    // if(i >= 2){
    //     goto genap;
    // }

    // statement while
    // int i = 1;
    // while (1 <= 10){
    //     if (i % 2 == 0){
    //         cout<<i<<" ";
    //     } i++;
    // }

    // int i = 1;
    // do{
    //     cout<<i<<" ";
    // } while (i > 10 );

    // int i = 1;
    // while(i==0){
    //     cout<<"Hello world"<<endl;i++;
    // }

    // for (int i = 1;i <= 10; i+=2){
    //     cout<<i<<endl;
    // }
    
    // for(int i=1;i<=5; i++){
    //     for(int j = 1;j<=5;j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=5; i++){
        for(int j = 1; j <= i; j++) {
            cout<<" * ";
        }
        cout<<endl;
    }
}

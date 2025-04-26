#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(){
    // ada 2 cara membuat array
    // string nama[5];

    // cara pertama
    // nama[0] = "Rifki";
    // nama[1] = "Dhafa";
    // nama[2] = "Willy";
    // nama[3] = "Rizky";
    // nama[4] = "Kiel";

    // cara kedua
    // string nama[5] = {"Rifki", "Dhafa", "Willy", "Rizky", "Kiel"};

    // cout<<nama[0]<<endl;
    // cout<<nama[1]<<endl;
    // cout<<nama[2]<<endl;
    // cout<<nama[3]<<endl;
    // cout<<nama[4]<<endl;

    // for (int i=0;i<5;i++){
    //     cout<<nama[i]<<endl;
    // }

    // for (int i=4;i>=0;i--){
    //     cout<<nama[i]<<endl;
    // }

    // Multidimensional array
    // int matrix[2][3]={{1,3,5},{2,4,6}};

    // for (int i=0;i<2;i++){
    //     for (int j=0;j<3;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int matrix[4][6]={{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6}};
    // for (int i=0;i<4;i++){
    //     for (int j=0;j<6;j++){
    //         cout<<matrix[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }

    // string nama = "Sauqy";
    // for (int i=0;i<nama.length;i++){
    //     cout<<nama[i]<<endl;
    // }

    // string s1 = "awooo";
    // string s2 = "uwooo";

    // cout<<(s1 + s2).length()<<endl;

    // substring
    // cout<<(s1 + s2).substr(0,2)<<endl;

    // Operator sizeof()
    // int angka=10;

    // cout<<sizeof(angka)<<endl;

    // int nilai[]={10,20,30,40,50};
    // cout<<sizeof(nilai)<<endl;

    // string n = "Rifki";
    // cout<<sizeof(n)<<endl;

    // int n;
    // string nama_karyawan[] = {"Rifki", "Dhafa", "Willy", "Rizky", "Kiel"};
    // n = sizeof(nama_karyawan)/sizeof(string);
    // cout<<n<<endl;

    // array library

    array<float,5> nilai = {87.5,90,100,95.7,78.5};
    cout<<"Nilai: ";
    // for (int i=0;i,nilai.size();i++){
    //     cout<<nilai[i]<<" ";
    // }

    for (float n : nilai){
        cout<<n<<endl;
    }


}   
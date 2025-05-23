#include <iostream> //header cipupus/cpp
using namespace std; //gak perlu ribet memakai std
int main(){
    //membuat array untuk matrix 2x2
    int matrix1[2][2]; 
    int matrix2[2][2];
    int matrix_hasil[2][2];
    //input data matrix ke satu
    cout<<"Matrix 1:"<<endl;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<"Masukkan baris "<<i + 1<<" kolom "<< j + 1<<" : ";cin>>matrix1[i][j];
        }
    }
    //input data matrix ke dua
    cout<<"Matrix 2:"<<endl;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<"Masukkan baris "<<i + 1<<" kolom "<< j + 1<<" : ";cin>>matrix2[i][j];
        }
    }
    //menjumlahkan 2 matrix sekaligus menampilkan matrix 2x2
    cout<<"\nHasil:"<<endl;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            matrix_hasil[i][j] = matrix1[i][j] + matrix2[i][j];
            cout<<matrix_hasil[i][j]<<"\t";
        }
        cout<<endl;
    }
}

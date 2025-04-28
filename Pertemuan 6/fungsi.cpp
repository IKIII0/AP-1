#include <iostream>
using namespace std;
// no return value
void tampilkanPesan(){
    cout<<"===SELAMAT DATANG DI AP 1==="<<endl;
}

// fungsi dengan nilai balikan
int tambah(int a, int b){
    return a + b;
}

int faktorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * faktorial(n - 1);
}

int main(){
    system("cls");
    tampilkanPesan();
    int x = 5, y = 3;
    int hasilTambah = tambah(x, y);
    cout<<"Hasil penjumlahan: "<<hasilTambah<<endl;

    cout<<"Faktorial dari "<<x<<" adalah: "<<faktorial(x)<<endl;



}
#include <iostream>
using namespace std;

string namaglobal = "Ilmu";

void namaVariabel(){
    string namaLokal = "Komputer";
}

int main(){
    string nama = "geda";
    namaVariabel();
    cout<<namaglobal;

}
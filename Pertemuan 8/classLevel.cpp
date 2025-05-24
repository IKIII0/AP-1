#include <iostream> //header cipupus/cpp
using namespace std; //biar gak memakai std berulang
//membuat sebuah class
class contohAkses{
    private:
        int privateVar; //membuat atribute dalam jenis private (tidak bisa diakses selain dari class nya sendiri)
    protected:
        int protectedVar; //membuat atribute dalam jenis protected (hanya bisa diakses di class sendiri dan class turunan (inherritance))
    public:
        int puvblicVar; //membuat atribute dalam jenis public (bisa dipakai dimana saja)

        //constructor (untuk set nilai)
        contohAkses(){
            privateVar = 1;
            protectedVar = 2;
            puvblicVar = 3;
        }
    //membuat method untuk menampilkan
    void tampilkanSemua(){
        cout << "Akses dari dalam class: " << endl;
        cout << "Private: " << privateVar << endl;
        cout << "Protected: " << protectedVar << endl;
        cout << "Public: " << puvblicVar << endl;
    }

};
//kelas turunan dari contohAkses
class turunan : public contohAkses{
    public:
        void aksesProtected(){
            cout << "Akses publicVar: "<< puvblicVar << endl;
            cout << "Akses protectedVar: "<< protectedVar << endl;
            
        }
};

int main(){
    system("cls"); //membersihkan tampilan
    contohAkses obj; //menginisialisasikan class ke dalam obj
    obj.tampilkanSemua(); //menampilkan method tampilkanSemua yang diakses dari dalam class contohAkses

    cout << "Akses dari luar class: " << endl;
    cout << "Public: " << obj.puvblicVar << endl; //menampilkan publicVar
    turunan tur;
    tur.aksesProtected(); //mengakses atribute jenis protected dari kelas turunan
}

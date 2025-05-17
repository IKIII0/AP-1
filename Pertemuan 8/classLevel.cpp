#include <iostream>
using namespace std;
class contohAkses{
    private:
        int privateVar;
    protected:
        int protectedVar;
    public:
        int puvblicVar;

        //constructor (untuk set nilai)
        contohAkses(){
            privateVar = 1;
            protectedVar = 2;
            puvblicVar = 3;
        }
    
    void tampilkanSemua(){
        cout << "Akses dari dalam class: " << endl;
        cout << "Private: " << privateVar << endl;
        cout << "Protected: " << protectedVar << endl;
        cout << "Public: " << puvblicVar << endl;
    }

};
//kelas turunan
class turunan : public contohAkses{
    public:
        void aksesProtected(){
            cout << "Akses publicVar: "<< puvblicVar << endl;
            cout << "Akses protectedVar: "<< protectedVar << endl;
            
        }
};

int main(){
    system("cls");
    contohAkses obj;
    obj.tampilkanSemua();

    cout << "Akses dari luar class: " << endl;
    cout << "Public: " << obj.puvblicVar << endl;
    turunan tur;
    tur.aksesProtected();
}
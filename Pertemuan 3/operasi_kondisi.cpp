#include <iostream> //header cipupus
using namespace std; //biar gak perlu memakai std berulang

int main(){
    int nilai;
    system("cls"); //membersihkan tampilan yang tidak perlu

    cout<<"Masukkan nilai: ";cin>>nilai; //cout untuk nampilin dan cin untuk input

    // if, else if, else:
    if (nilai == 100){ //jika kondisi terpenuhi maka akan menampilkan "anda kece!"
        cout<<"anda kece!";
    }

    else if (nilai <= 65){ //jika yang sebelumnya tidak terpenuhi maka menampilkan "anda tidak lulus"
        cout<<"anda tidak lulus"; 
    }

    else { //jika semua kondisi tidak terpenuhi, maka akan masuk ke kondisi else
        cout<<"anda lulus";
    }

    // nested if:
    if (nilai <= 60){
        cout<<"anda tidak lulus";
    }
    else{
        if (nilai==100){
            cout<<"anda kece!";
        }
        else{
            cout<<"anda lulus";
        }
    }

    // switch case
    switch (nilai){
        case 1:cout<<"Senin"<<endl; break; //case 1 itu jika kita input 1 maka akan nampilin Senin
        case 2:cout<<"Selasa"<<endl; break; //endl untuk newline
        case 3:cout<<"Rabu"<<endl; break; //break untuk memberhentikan switch case tersebut
        case 4:cout<<"Khamis"<<endl; break;
        case 5:cout<<"Jum'at"<<endl; break;
        case 6:cout<<"Sabtu"<<endl; break;
        case 7:cout<<"Minggu"<<endl; break;

        default:cout<<"Cuma 7 kocak hari nya -________- kau berharap ada hari apa LAGI!, BELAJAR LAGI DEK!"; //default akan ditampilkan ketika semua kondisi tidak terpenuhi (seperti else)
    }

    // switch range:
    switch (nilai){
        case 85 ...100:cout<<"Amatir"<<endl; break; //case 85..100 itu berarti antara 85 sampai 100 misal 85,86,87 dan seterusnya sampai 100
        case 80 ...84:cout<<"Bravo!++"<<endl; break;
        case 75 ...79:cout<<"Bravo!"<<endl; break;
        case 70 ...74:cout<<"Calon engineering++"<<endl; break;
        case 65 ...69:cout<<"Calon engineering"<<endl; break;
        case 60 ...64:cout<<"Doctor"<<endl; break;

        default:cout<<"Engineering"<<endl; break;
    }

    // ternary:
    string cek_angka = (nilai % 2 == 0) ? " Angka Genap" : " Angka Ganjil"; //ternary itu jika kondisi terpenuhi maka yang sebelah kiri "Angka Genap" jika tidak terpenuhi maka yang sebelah nya yaitu yang kanan
    cout<<nilai<<cek_angka<<endl;
}

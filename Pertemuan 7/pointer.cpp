#include <iostream>
using namespace std;
//fungsi penjumlahan
void penjumlahan(int a, int b){
    cout<< a + b <<endl;
}
// fungsi perjumlahan pointer
void penjumlahanPointer (int *a, int *b){
    *a += *b;
    cout<<*a<<endl;
}
//membuat fungsi kali 2 dengan menggunakan pointer
void doubleValue(int *a){
    *a *= 2;
    cout<< *a <<endl;
}

int main(){
    system("cls");

    // Deklarasi Pointer:
    // int number = 35;
    // int *p_number = &number;

    // cout<<"Isi variabel number: "<<number<<endl;
    // cout<<"Alamat memori variabel number: "<<&number<<endl;
    // cout<<"Isi variabel p_number: "<<p_number<<endl;
    // cout<<"Isi variabel yang ditunjuk oleh p_number: "<<*p_number<<endl;
    // cout<<"Alamat memori variabel p_number: "<<&p_number<<endl;
    
    // Pointer Operation:
    // *p_number = 25;

    // pointer in array:
    // int num[] = {1,2,3,4,5};
    // int *p_num = num;
    // cout<<"Alamat memori variabel num: "<<&num[3]<<endl;
    // cout<<"Isi variabel p_number: "<<p_num<<endl;
    // cout<<"Isi variabel num: "<<num[0]<<endl;
    // cout<<"Isi variabel yang ditunjuk oleh p_num: "<<*p_num<<endl;
    // cout<<"Alamat memori variabel p_num: "<<&p_num<<endl;
    // cout<<endl;
    
    // *p_num += 5;
    // cout<<"Isi variabel num: "<<num[0]<<endl;
    // cout<<"Alamat memori variabel num: "<<&num[3]<<endl;
    // cout<<"Isi variabel p_num: "<<p_num<<endl;
    // cout<<"Isi variabel yang ditunjuk oleh p_num: "<<*p_num<<endl;
    // cout<<"Alamat memori variabel p_num: "<<&p_num<<endl;
    // cout<<endl;

    // Pointer in Parameter:
    // int num1 = 5, num2 = 7;
    // penjumlahan(num1,num2);
    // cout<<num1<<endl;
    // cout<<num2<<endl;
    // penjumlahanPointer(&num1, &num2);
    // cout<<num1<<endl;
    // cout<<num2<<endl;

    // Pointer in Pointer:
    // int score = 4;
    // int *p_score = &score;
    // int **p_p_score = &p_score;

    // cout<<"isi variabel score: "<<score<<" dan alamat memorinya "<<&score<<endl;
    // cout<<"isi variabel p_score: "<< p_score<<" dan isi variabel yang ditunjuk oleh p_score: "<<*p_score<<" alamat memori p_score: "<<&p_score<<endl;
    // cout<<"isi variabel p_p_score: "<<p_p_score<<" dan isi variabel yang ditunjuk oleh p_p_score: "<<**p_p_score<<" alamat memori p_p_score: "<<&p_p_score<<endl;


    //dynamic pointer:
    // int *ptr = new int;
    // *ptr = 30;
    // cout<<"isi variabel ptr: "<<*ptr<<" alamat variabel ptr: "<<&ptr<<endl;
    
    // delete ptr;
    // cout<<"isi variabel ptr: "<<*ptr<<" alamat variabel ptr: "<<&ptr<<endl;

    // Contoh
    int n;
    cout<<"Masukkan sebuah angka: ";cin>>n;

    doubleValue(&n);
    cout<<"Nilai angka setelah di kali 2: "<<n<<endl;

}

#include <iostream>

using namespace std;

int tambah(int a, int b){//deklarasi
    int hasil;          //definisi
    hasil = a + b;
    return hasil;
}

void prosedurTambah(int a, int b){
    cout << a+ b << endl;
}

//Deklarasi di Atas
void cetakGanjil(int a);

string fungsiGanjil(int a);

bool fungsiGenap(int a);

void foo1(){
int f=0;
f++;
cout<< f <<endl;
}
void foo2(){
static int f=0;
f++;
cout<< f <<endl;
}
void foo3(){
int f;
f++;
cout<< f <<endl;
}

int main()
{
    int x, y;
    cout << "Masuk Bilangan 1 = ";
    cin >> x;
    cout << "Masuk Bilangan 2 = ";
    cin >> y;

    //Menggunakaan variabel dari main
    cout<< tambah(x, y)<<endl;
    //menggunakan constant
    cout<< tambah(4, 5)<<endl;
    //Prosedur
    prosedurTambah(x, y);
    cetakGanjil(x);
    cetakGanjil(y);
    //Menggunakan String
    cout << fungsiGanjil(x)<<endl;
    cout << fungsiGanjil(y)<<endl;
    //Menggunakan Boolean(Rekomendasi karena lebih simpel dan sesuai syarat)
    cout<<"1 = Iya, 2 = Tidak"<<endl;
    cout << "Apakah " << x << " genap ?" << fungsiGenap(x)<<endl;
    cout << "Apakah " << y << " genap ?" << fungsiGenap(y)<<endl;

    //Perbedaan static, int, int, dan assign int pada sebuah prosedur/fungsi
    foo1();
    foo1();
    foo1();
    foo2();
    foo2();
    foo2();
    foo3();
    foo3();
    foo3();

    return 0;
}

//Definisi di bawah
void cetakGanjil(int a){
    if(a%2 == 1){
        cout << "Ganjil" <<endl;
    }else{
        cout<< "Genap"<< endl;
    }
}

string fungsiGanjil(int a){
    string hasil;
    if(a%2 == 1){
        hasil = "Ganjil";
    }else{
        hasil = "Genap";
    }
    return hasil;
}

bool fungsiGenap(int a){
    return a%2 == 0;
}

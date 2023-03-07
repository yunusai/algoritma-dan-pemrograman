#include <iostream>

using namespace std;

void myfunction(){
    cout<<"Ini Fungsi myfunction()"<<endl;
}

void tambah(int a, int b){
    cout << a + b << endl;
}
//metode 1(prosedur)
void luasKubus(int s){
    cout<<6*s*s<<endl;
    //Tidak bisa digunakanditengah tengah operasi
    //sebuah satu kesatuan yang tidak bisa dimasukkan ke operasi lain
    //menurutku untuk menjalankan suatu prosedur dengan banyak perintah lebih bagus sepert loop atau conditional statement
}
//metode 2 (fungsi)
float Kubus(float s){
    return 6*s*s;
    //<enurutku untuk operasi matematika lebih bagus
    //bisa return hasil jadi
    //Bisa digunakan seperti ini:
    //float x = Kubus(s);
    //Bisa digunakan di tengah tengah operasi
}

void luasBalok(int p, int l){
    cout<<6*p*l<<endl;
}

int main()
{
    int a, b, s, p, l;
    cout << "Hari ini belajar membuat fungsi" << endl;
    myfunction();

    cout << "Fungsi Pertambahan 2 Variabel\n\n";
    cout<< "Masukkan nilai a = ";
    cin >> a;
    cout<< "Masukkan nilai b = ";
    cin >> b;
    tambah(a,b);
    cout<<endl;

    //Metode 1(menggunakan Prosedur)
    cout << "Luas Permukaan sebuah Kubus\n\n";
    cout<< "Masukkan nilai sisi kubus = ";
    cin >> s;
    cout<<"Luas permukaan kubus tersebut adalah ";
    luasKubus(s);//Tidak bisa ditaruh di line cout
    cout<<endl;

    //Metode 1(menggunakan Fungsi)
    cout << "Luas Permukaan sebuah Kubus\n\n";
    cout<< "Masukkan nilai sisi kubus = ";
    cin >> s;
    cout<<"Luas permukaan kubus tersebut adalah " << Kubus(s);//Bisa ditaruh di line cout
    cout<<endl;

    cout << "\nLuas Permukaan sebuah Balok\n\n";
    cout<< "Masukkan nilai panjang balok = ";
    cin >> p;
    cout<< "Masukkan nilai lebar balok = ";
    cin >> l;
    cout<<"Luas permukaan Balok tersebut adalah ";
    luasBalok(p,l);
    cout<<endl;


    return 0;
}

#include <iostream>

using namespace std;

int penjumlahan(int a, int b){
    if(b==0){
        return a;
    }else{
        return 1 + penjumlahan(a, b-1);
    }
}

int pengurangan(int a, int b){
    if(b==0){
        return a;
    }else{
        return pengurangan(a, b-1) - 1;
    }
}
int perkalian(int a, int b){
    if(b==0){
        return 0;
    }else{
        return a+perkalian(a, b-1);
    }
}

int pembagian(int a, int b){
    if(a < b){
        return 0;
    }else{
        return 1+pembagian(a - b, b);
    }
}

int pangkat(int a, int n){
    if(n == 0){
        return 1;
    }else{
        return a*pangkat(a, n-1);
    }
}
/*
*/
int main()
{
    int a = 10, b = 5, n = 3;
    cout << "Hasil Jumlah = " << penjumlahan(a, b) << endl;
    cout << "Hasil Kurang = " << pengurangan(a, b) << endl;
    cout << "Hasil Kali = " << perkalian(a, b) << endl;
    cout << "Hasil Bagi = " << pembagian(a, b) << endl;
    cout << "Hasil pangkat 3 dari "<< a <<" = " << pangkat(a, n) << endl;
    return 0;
}

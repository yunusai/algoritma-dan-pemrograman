#include <iostream>

using namespace std;

int maxN(int a, int b);

int maxArray(int a[]);


int main()
{
    int a[] = {72,56,4897,32, 566, 100};
    int len = sizeof(a)/sizeof(a[0]);
    int len2 = sizeof(a);
    int len3 = sizeof(a[0]);
    cout << len <<endl;
    cout << len2 <<endl;
    cout << len3 <<endl;
    cout << maxN(70, 100) << endl;
    cout << maxArray(a) << endl;
    return 0;
}

int maxN(int a, int b){
    int temp;
    if(a>b){
        temp = a;
    }else{
        temp = b;
    }
    return temp;
}

int maxArray(int a[]){
    int temp = 0;
    int len = sizeof(a);//tidak direkomendasikan karena sizeof() itu menghitung besar byte dari sebuah data bukan jumlah data
    for(int i = 0 ; i<len; i++){
        if(a[i] > temp){
            temp = a[i];
            }
        }
        return temp;
    }

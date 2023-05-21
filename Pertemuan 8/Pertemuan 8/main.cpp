#include <iostream>

using namespace std;

bool isGanjil(int bil){
    if(bil%2 == 1){
        return true;
    }
    return false;
}

void getEvenMin(int arr[], int n){
    int idx, min = arr[0];
    for(int i = 0; i < n; i++){
        if(!isGanjil(arr[i]) && arr[i] < min){
            min = arr[i];
            idx = i;
        }
    }
    cout << endl<<"Bilangan Genap terkecilnya = " << min << " pada index ke-"<< idx <<endl;
}

void inputArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << "Masukkan bilangan ke-"<< i+1 <<"= ";
        cin >> arr[i];
    }
}

void cetakArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout <<arr[i]<<", ";
    }
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n -1 - i; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int max_idx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] > arr[max_idx]){
                max_idx=j;
            }
        }
        swap(arr[max_idx], arr[i]);
    }
}

int main()
{
    int n;
    cout << "Masukan banyak bilangan = ";
    cin >> n;
    int arr[n];
    inputArr(arr, n);
    cout<<endl;

    cout<<"Array = "<<endl;
    cetakArr(arr, n);
    cout<<endl;

    cout << "Hasil Sorting Bubble Sort = ";
    bubbleSort(arr, n);
    cetakArr(arr, n);
    getEvenMin(arr, n);
    cout<<endl<<endl;

    cout<<"Array ke-2"<<endl;
    int arr1[n];
    inputArr(arr1, n);
    cout<<endl;

    cout<<"Array = "<<endl;
    cetakArr(arr1, n);
    cout<<endl;

    cout << "Hasil Sorting Selection Sort = ";
    selectionSort(arr1, n);
    cetakArr(arr1, n);
    return 0;
}

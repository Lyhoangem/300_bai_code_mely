#include<iostream>
using namespace std;

void SapXep(int arr[], int phantu){
    for(int i = 0; i < phantu; i++){
        for(int j = i + 1; j < phantu; j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main(){
    short n, m;
    cin >> n >> m;
    int* arr1 = new int[n];
    int* arr2 = new int[m];
    
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    } 
    
    for(int j = 0; j < m; j++){
        cin >> arr2[j];
    }
    
    SapXep(arr1, n);
    SapXep(arr2, m);
    int coso10 = 1000; // Giá tr? kh?i t?o l?n hon giá tr? t?i da có th? d? so sánh
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int coso = (arr1[i] > arr2[j]) ? (arr2[j] * 10 + arr1[i]) : (arr1[i] * 10 + arr2[j]);
            if(coso < coso10) {
                coso10 = coso;
            }
        }
    }
    
    cout << coso10;
    
    delete[] arr1;
    delete[] arr2;
    return 0;
}


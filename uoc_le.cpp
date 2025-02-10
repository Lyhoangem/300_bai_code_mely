#include<iostream>
#include<cmath>
using namespace std;

int Tim_Uoc_Le_LN(int n){
    int max=0;
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0 && i%2!=0){
            max = i;
        }
    }   
    return max;
}

int main(){
    short n;
    cin>>n;

    int arr [n];
     
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }


for(int i=0; i<n ;i++){
        if(arr[i]%2 != 0){
            cout<<arr[i]<<endl;
        }
        else {
         cout<<Tim_Uoc_Le_LN(arr[i]);
            cout<<endl;
        }
    }

}

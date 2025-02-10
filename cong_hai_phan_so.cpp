#include<iostream>
using namespace std; 


int UCLN(int a, int b){
    if(b==0) return a;
    return UCLN(b,a%b);
}

void DonGian(int &Tu, int &Mau){
    int sotoigian = UCLN(Tu,Mau);
    Tu/=sotoigian;
    Mau/=sotoigian;
    cout<<Tu<<" "<<Mau;
} 

void Cong_PS(int a, int b, int c, int d){
    int Tu, Mau;
    Tu = a*d + c*b;
    Mau = d*b;
    DonGian(Tu,Mau);
}

int main(){
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    Cong_PS(a,b,c,d);
    
}

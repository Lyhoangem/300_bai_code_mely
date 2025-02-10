#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a == 0){
            if(b == 0){
            	if(c != 0) cout<<"Phuong trinh vo nghiem";
            	else cout<<"Phuong trinh vo so nghiem";
			}
		    else 
		      cout<<"Phuong trinh co nghiem";
	}
	
	else {
		double Delta = b*b - 4*a*c;
		if(Delta > 0) cout<<"Phuong trinh co 2 nghiem phan biet";
		else if(Delta == 0) cout<<"Phuong trinh co nghiem";
		else cout<<"Phuong trinh vo nghiem";
	}
	return 0;
}

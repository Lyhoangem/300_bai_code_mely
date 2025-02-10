#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	
	int *Lodging = new int[n];
	for(int i=0; i<n; i++){
		cin>>Lodging[i];
	}
	
	int MaxPrice = k;
	int MinDistance = 101;
	int PositionOfTi = m-1; 
	int PositionOfTeo = 0 ;
	for(int i=0; i<n; i++){
		if(Lodging[i] == 0) continue;
	    else if(Lodging[i] > MaxPrice) continue;
	    else if(Lodging[i]<=MaxPrice){
	    	if(MinDistance > abs(i-PositionOfTi) ){
	    		MinDistance = abs(i - PositionOfTi);
			}
		}
	}
	if(MinDistance == 101) cout<<-1;
	else
	cout<<MinDistance*10;
}

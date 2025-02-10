#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	
	for(int i=0; i<n; i++){
		cin>> v[i];
	}
	
	long long iSumC=0, iSumL=0;
	for(int i=0; i<v.size(); i++){
		if((i+1)%2==0) iSumC+=v[i];
		else iSumL+=v[i];
	}
	cout<<iSumC - iSumL<<endl;
} 

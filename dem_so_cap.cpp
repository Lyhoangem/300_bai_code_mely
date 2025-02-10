#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long N;
	long long X;
	cin>>N>>X;
	long long *arr = new long long[N];
	
	for(int i=0; i<N; i++){
		cin>>arr[i];
	}
	
	int count = 0;
	for(int i=0; i<N; i++){
		for(int j=i; j<N; j++){
			if(arr[i]*arr[i] + arr[j] == X) 
			count++;
		}
	}
	delete[]  arr; 
	cout<< count;
}

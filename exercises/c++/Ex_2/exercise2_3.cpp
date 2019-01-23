#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

void SieveofEra(int N){
	bool prime_number[N+1];
	memset(prime_number,true,sizeof(prime_number));
	for(int i=2;i<=sqrt(N);i++){
		if(prime_number[i]==true){
			for(int j=2*i;j<=N;j+=i){
				prime_number[j]=false;
			}
		}	
	}
	for(int i=2;i<=N;i++){
		if(prime_number[i]){cout<<i<<endl;}
	}
};

int main(){
	int N=0;
	cout<<"enter the number of prime number:"<<endl;
	cin>>N;
	SieveofEra(N);
	return 0;
}

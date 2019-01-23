#include <iostream>
using namespace std;
//Defined a function primenumber that check if the element is a prime number or not.
bool primenumber(const int N){
	int p=0;
	for(int i=1;i<=N;i++){
		if(N%i==0){p++;}	
	}
	if(p==2){return true;}
	else{return false;}
};
int main(){
	int a=0;
	int * prime=new int[a];
	for(int i=2;i<101;i++){
		if(primenumber(i)){		//filling array prime[] just with prime numbers up to 100
		prime[a]=i;
		a++;
		}
	}
	for(int i=0;i<a;i++){
        	cout<<prime[i]<<endl;
        }
	delete[] prime;
}

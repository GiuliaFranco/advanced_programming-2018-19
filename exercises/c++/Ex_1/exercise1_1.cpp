//Lesson 2 (04/10/2018)
//Exercise 1
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
	string l,a;
	getline(cin,l);
	while(getline(cin,a)){
		int i=1;
		if(l==a){i++;cout<<i<<"  "<<l<<endl;}
		if(l!=a){cout<<1<<"  "<<l<<endl;}
		getline(cin,l);
		if(a==l && i>1){cout<<i+1<<"  "<<a<<endl;}
                if(a==l && i==1){cout<<2<<"  "<<a<<endl;}
		if(a!=l){cout<<1<<"  "<<a<<endl;}
	}	




	return 0;

}

#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

void get_int(){
	cout<<"enter a number"<<endl;	
	float i;
	cin>>i;
	while(!(i==int(i))){
		cout<<"enter a number:"<<endl;
		cin>>i;
	}
	cout<<"Here's the int: "<<i;
};

void get_double(){
	double i,l,fracpart;
	cout<<"enter a number"<<endl;
	cin>>i;
	fracpart=modf(i,&l);
	while(fracpart==0){
		cout<<"enter a number:"<<endl;
                cin>>i;
		fracpart=modf(i,&l);
        }
	
        cout<<"Here's the double: "<<i;
};

int main(){
	get_int();
	cout<<endl;
	get_double();

	return 0;


}

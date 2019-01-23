#include <iostream>
#include <string>

using namespace std;
double inch_to_metres(double var){
	return var/39.37;
};

double metres_to_inch(double var){
        return var*39.37;
};
int main(){
	double val;
	cout<<"enter value: "<<endl;
	cin>>val;
	string unit;
	cout<<"enter the unit: "<<endl;
	cin>>unit;
	if(unit=="inch"){
		cout<<"Ecco il valore in metri: "<<inch_to_metres(val)<<endl;
		}
	if(unit=="metres"){
                cout<<"Ecco il valore in inch: "<<metres_to_inch(val)<<endl;
                }
	return 0;

} 

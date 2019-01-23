#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

double mean(vector<double> d){
        int S=d.size();
	double sum=0;
	for(int i=0;i<d.size();i++){
		sum+=d[i];
        }
	return sum/S;
};

double Median(vector<double> d){
        int S=d.size();
	sort( d.begin(), d.end() );
        if(S%2==0){return d[S/2-1]; }
	else{
		double a=d[(S-1)/2-1];
		double b=d[(S-1)/2+1];
		return (a+b)/2;
	}
       
};
int main(){
	ifstream inFile;
	inFile.open("temperatures.txt");
	vector<double> data;
	double t;
	do
	{
		inFile>>t;
		data.push_back(t);
	}
	while(!inFile.eof());
	inFile.close();
	cout<<mean(data)<<endl;
	cout<<Median(data)<<endl;

};

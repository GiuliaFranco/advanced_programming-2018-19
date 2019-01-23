#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

void No_ripetitions(vector<string>& vect){
	set<char> filter;
	set<char>:: iterator it;
	for(int i=0;i<vect.size();i++){
		for(int j=0;j<vect[i].size();j++){
			filter.insert(vect[i][j]);
		}
		string mystring;
		for(it = filter.begin(); it!=filter.end(); it++){
                        mystring.push_back(*it);
                }
		vect[i]=mystring;
		filter.clear();
		mystring.clear();
	}

};

void print(vector<string> vect){
	for(int m=0;m<vect.size();m++){
        	cout<<vect[m]<<endl;
        }

};
int main(){
	int N=0;
	cout<<"enter the number of words you want to store"<<endl;
	cin>>N;
	vector<string> words;
	string a; 
	for(int i=0;i<N;i++){
		cin>>a;
		words.push_back(a);
	}
	print(words);
	No_ripetitions(words);
	print(words);

	return 0;

}

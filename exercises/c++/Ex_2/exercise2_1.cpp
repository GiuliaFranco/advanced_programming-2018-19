#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template<typename V>
V * initialize_vec(int N,V vec[]){
	for(int i=0;i<N;i++){
		cout<<"enter a value"<<endl;
		cin>>vec[i];
	}
	V * v;
	v=vec;
	return v;

}
template<typename V>
void print_array(V * vect,int N){;
	for (int i=0;i<N;i++){
		cout<<*(vect+N-1-i)<<endl;
	}

};
void print_elem(double elem)
{
    cout << elem << endl;    
}

int main(){
	int L=5;
	//cout<<"enter length: "<<endl;
	//cin>>L;
	/*int vec_int[L];
	double vec_double[L];
	int * point;
	point=initialize_vec<int>(L,vec_int);
	double * point1=initialize_vec<double>(L,vec_double);
	print_array(point,L);
	print_array(point1,L);*/
	vector<int> numbers_int;
	int a=0;
	for(int i=0;i<L;i++){
		cout<<"enter elem"<<endl;
		cin>>a;
		numbers_int.push_back(a);
	}
	reverse(numbers_int.begin(), numbers_int.end());
	for_each(numbers_int.begin(),numbers_int.end(),print_elem);
	vector<double> numbers_double;
        double b=0;
        for(int i=0;i<L;i++){
                cout<<"enter elem"<<endl;
                cin>>b;
                numbers_double.push_back(b);
        }
        reverse(numbers_double.begin(), numbers_double.end());
        for_each(numbers_double.begin(),numbers_double.end(),print_elem);
	//delete [] point;
	//delete [] point1;
	return 0;
}

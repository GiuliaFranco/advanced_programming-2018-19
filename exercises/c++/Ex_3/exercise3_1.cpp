#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

void transpose_mat(int C,int R,array<double,4>& mat,array<double,4>& trasp){
	for(int j=0;j<R;j++){
		for(int i=0;i<C;i++){	
                	trasp[i+j*C]=mat[i*R+j];
        	}
	}	
};

int main(){
	//int Row=3;
	//int Col=2;
	//array<double,6> mat;
	array<double,4> mat_qua;
	//for(int i=0;i<6;i++){
	//	cout<<"enter double"<<endl;
	//	cin>>mat[i];
	//}
	for(int i=0;i<4;i++){
                cout<<"enter double"<<endl;
                cin>>mat_qua[i];
        }
	//array<double,6> mat_trasp;
	array<double,4> mat_qua_trasp;
	//transpose_mat(Col,Row,mat,mat_trasp);
	//for(int i=0;i<6;i++){
        //        cout<<mat_trasp[i]<<endl;
        //}
	transpose_mat(2,2,mat_qua,mat_qua_trasp);
        for(int i=0;i<4;i++){
                cout<<mat_qua_trasp[i]<<endl;
        }
}

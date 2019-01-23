#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Data{
public:
	Data(int d,int m,int y):m_day(d),m_month(m),m_year(y){};
	int day() const  {return m_day;}
	int month() const{return m_month;}
	int year() const {return m_year;}
	void add_days(const unsigned int n){
		int days=n+m_day;
		if(m_month==1 || m_month==3 || m_month==5 || m_month==7 || m_month==8 || m_month==10 || m_month==12){
			if(days>31){  
				setD(days-31);
				if(m_month==12){m_year+=1; m_month=1;}
				else{m_month+=1;}
			}
			else{setD(days);}	
		}
		else if(m_month==4 || m_month==6 || m_month==9 || m_month==11){
                        if(days>30){ 
				m_month=1+m_month; 
				m_day=days-30;
			}
			else{setD(days);}
                }
		else{
			if(days>28){ 
				m_month=1+m_month; 
				m_day=days-28;
			}
			else{setD(days);}
		}
	};
private:
	int m_day;
	int m_month;
	int m_year;
	void setD(int a){m_day=a;}
};

bool operator==(const Data& l, const Data& r){
	if(l.day()==r.day() && l.month()==r.month() && l.year()==r.year()){return true;}
	else{return false;}
};

bool operator!=(const Data& l, const Data& r){
        if(l==r){return false;}
        else{return true;}
};

std::ostream& operator<<(std::ostream& os, const Data& d){
	os << d.day() << " " << d.month() << " " << d.year() << std::endl;
	return os;
};


int main(){
	Data d(1,12,2);
	Data f(1,2,1);
	cout<<d.day()<<endl;
	cout<<d.month()<<endl;
	d.add_days(34);
	cout<<d.day()<<endl;
        cout<<d.month()<<endl;
	if(d!=f){cout<<"different"<<endl;}
	cout<<d<<endl;
	
	return 0;
}

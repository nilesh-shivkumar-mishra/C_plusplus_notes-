#include<iostream>
using namespace std;

class base1{
	public:
	void performance (void){
		
		cout<<"losser"<<endl;
	}
};

class base2{
	public:
	void performance (void){
		
		cout<<"losser you want to become winner so stand up and fight"<<endl;
	}
};

class base3: public base1,public base2{
	public:	
	void performance(){
		base2::performance(); // now it willgive you base2 ka performance() function
	}
	
};

int main(){
//	base1 b;
//	b.performance();
//	base2 a;
//	a.performance();
	
 // it will not run because performance() funcyion is ambigous mean it persent on both class same name so it was confuse which one give back class 1 ka performance() function ki class 2 ka performance function
 // to solve problem you want to do which is don on base3 class
	base3 n;
 	n.performance();
	
	
}

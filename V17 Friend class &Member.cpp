#include <iostream>
using namespace std;

// how asses the private variable
class complex; // forward declaration 
//2class
class calulator{
	public:
		int add(int a ,int b){
		
	return (a+b);
}
	int sumrealcomplex(complex  ,complex); //declar the function 
	int sumbasecomplex(complex  ,complex); //declar the function
};

//1 class
class complex{
	int a,b;
	friend int calulator :: sumrealcomplex(complex  ,complex );
	friend int calulator :: sumbasecomplex(complex  ,complex );
	public:
		void setNumber(int n1 ,int n2){
			a=n1;
			b=n2;
		}
		void printNumber(){
			cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
		}
};

	int calulator :: sumrealcomplex(complex o1 , complex o2){ //
		return (o1.a+o2.a);
	}
	
	int calulator :: sumbasecomplex(complex o1 , complex o2){ //
		return (o1.b+o2.b);
	}

int main(){
	complex o1,o2;
	o1.setNumber(1,2);
	o2.setNumber(3,4);
	calulator calc;
	int res = calc.sumrealcomplex(o1,o2);
	cout<<" the sum of 1st part(a)part of o1 and o2 is"<<res<<endl;
	int mac = calc.sumbasecomplex(o1,o2);
	cout<<" the sum of 2nd part (b) part of o1 and o2 is"<<mac	<<endl;
	return 0;
}

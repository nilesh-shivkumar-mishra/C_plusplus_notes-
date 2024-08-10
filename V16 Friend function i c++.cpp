// Friend function i c++



#include <iostream>
using namespace std;

class complex{
	int a,b;
	
	public:
		void setNumber(int n1 ,int n2){
			a=n1;
			b=n2;
		}
		friend complex sumcomplex(complex o1,complex o2); // as you  declar function as friend now you can initalize function at outsideof class as a part of class
		void printNumber(){
			cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
		}
};

 complex sumcomplex(complex o1,complex o2){
	complex o3;
	o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
	return o3;
}
 
int main(){
	complex c1 , c2 ,sum;
	c1.setNumber(1,3);
	c2.setNumber(4,7);
	
	c1.printNumber();
	c2.printNumber();
	
	// friend fuction wala ko allag se call karana hai
	sum=sumcomplex(c1,c2);
	sum.printNumber();
	return 0;
}

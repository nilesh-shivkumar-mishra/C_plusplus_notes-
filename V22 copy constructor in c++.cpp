//copy constructor in c++

// if there is no copy constructor compiler provide you copy constructor
#include <iostream>
using namespace std;

class number{
	int a;
	public:
		
		// defult constructor you want declar if use using constructor
		number (){
		a=0; //default value of a
		}
		number(int num){
			a=num;
		}
		
		number(number &obj){
			cout<<"copy constructor called"<<endl;
			a=obj.a;
		}
		
		void display(void){
			cout<<"the number for this object is"<<a<<endl;
		}
};
int main(){
	number x,y,z(45) ,z5; //we set value for z
//	number a(9);//  if you want to run input wala constructor it is complasory to make void constructor also
    z.display();
	x.display();
	y.display();
	
	//copy constructor ka lia esa variable bano jo object declar nahi ha (isam z1 jo class ka object ma nahi ha)
	//copy constructor will be run
	number z1(x);  //value aof z1 ko kardo x ka a ka value ka barabar
	z1.display();

	//copy constructor will be run	
	number z3=z;
	z3.display();
	
	//copy constructor will be not run	because you create object z5
	z5=z;
	z5.display();
	
	return 0;
}

// constructor in c++

#include <iostream>
using namespace std;

class complex{
	int a ,b;
	public:
	// creating constructor
	
	// constructor is a special member function with the same name as of the class. 
	complex(void); // constructor declaration
	
	void printNumber()
	{
		cout<<"your number is "<<a<< " + "<<b<<"i"<<endl;
		}	
};

complex :: complex(void) // these is default constructor
{
	a=10;
	b=0;
	cout<<"hello"<<endl;
}
int main(){
	complex c , d ,e;
	c.printNumber();
		d.printNumber();
	e.printNumber();

	return 0;
};

//characteristics of constructor 

//1. it should be declared in the public section of the class 
//2. they are automatically invoked  whenever the object is created 
//3. the cannot return values do not have return types
//4. it can have default argument
//5. we cannot we refer the addresh 

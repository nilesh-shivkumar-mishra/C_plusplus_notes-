#include <iostream>
using namespace std;

class complex{
	int a ,b;
	public:
	// creating constructor
	sum();
	// constructor is a special member function with the same name as of the class. 
	complex(int x , int y); // constructor declaration
	
	void printNumber()
	{
		cout<<"your number is "<<a<< " + "<<b<<"i"<<endl;
		}	
};



complex :: complex(int x ,int y) // these is parameterized  constructor take 2 arggument
{
	a=x;
	b=y;
	cout<<"hello"<<endl;
}


int main(){
	//impliset call
	complex a(4,6);
	
	
	//Explicit call
	complex b = complex(5,7);
	
	a.printNumber();
	b.printNumber();
	return 0;
};


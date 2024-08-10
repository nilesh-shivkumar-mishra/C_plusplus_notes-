// dectructor in c++
//destrucor ever take an arrgument nor does it return any value
#include<iostream>
using namespace std;

int count=0;
class num{
	public:
		num(){
			count++;
			cout<<"this is a time when constructor is called for object number"<<count<<endl;
		}
		
		// syntax of destorctor = ~classname(){}
		~num(){
			cout<<"this is a time when destructor is called for object number"<<count<<endl;
			count--;
		}
};

int main(){
	cout<<"we are inside our main function"<<endl;
	cout<<"creating first objects n1 "<<endl;
	num n1;// calling constructor for n1
	{
		cout<<"Entering this block"<<endl;
		cout<<"creating two more objects "<<endl;
		num n1,n3; //calling default constructor for n2 and n3
		cout<<"exiting this block"<<endl; 
		// at end destrutor will be call for n2 and n3
	}
	cout<<"back to main"<<endl;
	// dectructor will be call n1
	return 0;
}

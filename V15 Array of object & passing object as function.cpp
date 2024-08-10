// Array of object & passing object as function

#include <iostream>
using namespace std;

class fri {
	int id;
	int salary;
	
	public:
		void boy(void){
			cout<<"enter id no of friend "<<endl;
			cin>>id;
		}
		void girl(void){
			cout<<"what is salary of friend "<<" ? "<<endl;
			cin>>salary;
		}
};


int main(){
//	fri f,v,g;
//	f.boy();
//	f.girl();

 // you want to store id number with the salary of 1000 people yhen dont use upper method enstand use for loop
	
	fri ind[4]; // fri is class and ind is class name
	for(int i=0;i<4;i++)
	{
		ind[i].boy();
		ind[i].girl();
	}
	return 0;
}


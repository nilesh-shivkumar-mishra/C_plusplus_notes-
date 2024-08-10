#include <iostream>
using namespace std;

template <class T1 , class T2 >

class myclass{
	public:
		T1 data1;
		T2 data2;
	myclass(T1 a , T2 b){
		 data1=a;
	     data2=b;
	}
	
	void display(){
		cout<<"data1 is "<<this->data1<<endl;
		cout<<"data2 is "<<this->data2<<endl;
	}
};

int main(){
	
	myclass<char , float> m('j',1.4); // char hoga tho "" nahi ' '
	m.display();
	return 0;
}

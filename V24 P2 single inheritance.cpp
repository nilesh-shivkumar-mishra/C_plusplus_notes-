//single inheritance

#include <iostream>
using namespace std;

class Base{
	int data1; // private by default it is not inheritable
	public:
		int data2;
		void setdata(void);
		int getdata1();
		int getdata2();
};

void Base::setdata(void){
	data1=10;
	data2=20;
}
int Base::getdata1(){
	return data1;
}
int Base::getdata2(){
	return data2;
}
class derived:public Base // class (classname of derived class): visiblity mode (classname baseclass)
{
int data3;
public:
void process();
void display();
};

void derived::process(){
	data3=data2*getdata1();
};

void derived ::display(){
	cout<<"value of data1 is : "<<getdata1()<<endl;
	cout<<"value of data2 is : " <<data2<<endl;
	cout<<"value of data3 is : " <<data3<<endl;

}
int main(){
	derived der;
	der.setdata();
	der.process(); //by single inheritance we can use same object for base class to access object
	der.display();
	der.getdata1();
	
};

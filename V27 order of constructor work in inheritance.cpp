/*
class b:public class a{
	// order of execution of constructor is class a then class b 
};

class b:public class a, public class c{
	// order of execution of constructor is a() ,c() then b() mean 1 class after (:) then 2 class after (:) then class before(:)
};

class b:public class a , virtual public c{
	// order of execution of constructor is class c then class a then class b 
};
*/
#include<iostream>
using namespace std;

class base1{
	private:
		int data1;
	public:
	base1(int a){
		data1=a;
		cout<<"constructor of base1 class"<<endl;
	}
	void data1_print(){
	cout<<"value os data1 is :"<<data1<<endl;
	}
};

class base2{
	private:
		int data2;
	public:
	base2(int b){
		data2=b;
		cout<<"constructor of base2 class"<<endl;
	}
	void data2_print(){
	cout<<"value os data2 is :"<<data2<<endl;
	}
};

class derived : public base2,public base1{   // according to this order of constructor called is base2 base1 then derived constructor
	private:
		int derived1;
		int derived2;
	public:
		derived(int a ,int b, int c, int d):base1(a) , base2(b){
			derived1=c;
			derived2=d;
			cout<<"derived constructor called"<<endl;
		}
	
		void print_derived(){
			data1_print();
	     	data2_print();
			cout<<"value of derived 1 is :"<<derived1<<endl;
	    	cout<<"value of derived 2 is :"<<derived2<<endl;
		}
};
int main(){
	derived m(2,4,6,8); //how to call constructor with parameter
	m.print_derived();
}

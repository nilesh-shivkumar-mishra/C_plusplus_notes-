// pointer to derived class

//in this display member function of 2 class is same
#include <iostream>
using namespace std;

class baseclass{
	public:
		int var_base;
		
		void display(){
			cout<<"display base calss variavle var_base " <<var_base<<endl;
		}
};

class derivedclass : public baseclass{
	public:
		int var_derived;
		void display(){
			cout<<"display base calss variavle var_derived " <<var_derived<<endl;
		}
};


int main(){
	baseclass obj_base;
	derivedclass obj_derived;
	
	baseclass * base_class_pointer; //here we  make baseclass pointer
	base_class_pointer = &obj_derived;// here we point baseclass pointer to object of derived class
	
	// we can set value of public variable in class or we can run member function of class
	base_class_pointer->var_base=22; // here with help of base_class_pointer we set value of variable var_base present in baseclass
	base_class_pointer->display(); // here with help of base_class_pointer we run display() function
	
	//
	
	derivedclass * derived_class_pointer;
	derived_class_pointer = &obj_derived; // derived class object to derived base
	
	derived_class_pointer->var_derived=23;
	derived_class_pointer->var_base=29; //we can set value of variable of  baseclass using derived_class_pointer se because the performing inheriteance 
	derived_class_pointer->display();
	base_class_pointer->display();
	
	return 0;
}

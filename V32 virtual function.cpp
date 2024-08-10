#include <iostream>
using namespace std;

class baseclass{
	public:
		int var_base =1;
		
	//	virtual keyword bol raha ha ki agar mera ptr derived class ka obj ko point kar raha ha tho derived class ka function run karo
		virtual void display(){   //virtual keyword use
			cout<<"1 display base  calss variavle var_base " <<var_base<<endl;
		}
};

class derivedclass : public baseclass{
	public:
		int var_derived = 2;
		void display(){
			cout<<" 2 display base calss variavle var_base " <<var_base<<endl;
			cout<<" 2 display base calss variavle var_derived " <<var_derived<<endl;
		}
};

 
 int main(){
 	baseclass obj_base;
	derivedclass obj_derived;
	
 	baseclass * base_class_pointer; 
 	base_class_pointer = &obj_derived;
 	base_class_pointer->display();
 	
 }

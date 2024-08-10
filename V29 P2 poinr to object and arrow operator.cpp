#include <iostream>
using namespace std;

class person{
	private:
		int real,imaginary;
	public:
		void setdata(int a ,int b){
			real =a;
			imaginary =b;
		}
		void getdata(void){
			cout<<"value of real part is "<<real<<endl;
			cout<<"value of imaginary part is "<<imaginary<<endl;
		}
};
int main(){
	//
	
//	person p;
//	p.setdata(9,8);
//	p.getdata();

     //
     
//	// calling member function with help of pointers
//	person p;
//	person *ptr = &p;
//	(*ptr).setdata(9,8);
//	(*ptr).getdata();
//	return 0;
    
    //
    
//	//same thing with new form using pointer;
//	person *ptr = new person;
//	(*ptr).setdata(9,8);
//	(*ptr).getdata();
	
	//
	
//  //(*ptr) same as  =  ptr-> (it is work same)	
//	person *ptr = new person;
//	ptr->setdata(1,5);               
//	ptr->getdata();
    
    //
    

person *p = new person[4];
p->setdata(1,4) ;
p->getdata();
	
}

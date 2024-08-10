#include <iostream>
using namespace std;

class cls{
	private:
		int a;
	public:
		
//		void setdata(int a){
//			this->a = a; // same hoga tho this karka use kar sakta ho
//		}

		cls & setdata(int a){ // here void is not it will return object;
			this->a = a; 
			return *this;
		}
		void getdata(){
			cout<<"the value of a is : "<<a<<endl;
		}
};

int main(){
	cls p;
	p.setdata(8).getdata();
//	p.getdata();
}

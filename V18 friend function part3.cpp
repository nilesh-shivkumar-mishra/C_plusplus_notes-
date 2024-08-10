// simple example of friend function
#include <iostream>
using namespace std;

	class y;
	
class x{
	int data;
	
	public:
		void setvalue(int value){
			data=value;
		}
	friend void add(x,y);
};

class y {

	
	int num;
	
	public:
		void setvalue(int value){
			num=value;
		}
	friend void add(x,y); // compiler bola ga y kya ha tho app ko class y ko forward declartion dena hoga
};

void add (x o1 ,y o2 ){
	cout<<"summing data of x and y objects given me"<<o1.data+o2.num;
}
int main(){
	x a1;
	a1.setvalue(3);
	y b1;
	b1.setvalue(5);
	
	add(a1,b1);
	
	return 0;
}

//// complex example  of friend function 
//
//#include <iostream>
//using namespace std;
//
//	class c2;
//	
//class c1{
//	int data;
//	
//	public:
//		void setvalue(int value){
//			data=value;
//		}
//		
//		void display(void){
//			cout<<data<<endl;
//		}
//	friend void swamp(c1 &o1 ,c2 &o2);
//};
//
//class c2 {
//
//	
//	int num;
//	
//	public:
//		void setvalue(int value){
//			num=value;
//		}
//		
//			void display(void){
//			cout<<num<<endl;
//		}
//	friend void swamp(c1 &o1 ,c2 &o2); // compiler bola ga y kya ha tho app ko class y ko forward declartion dena hoga
//};
//
//void swamp (c1 &o1 ,c2 &o2 ){
//	int tmp = o1.data;
//	o1.data = o2.num;
//	o2.num=tmp;
//}
//int main(){
//	c1 oc1;
//	c2 oc2;
//	
//	oc1.setvalue(34);
//	oc2.setvalue(64); 
//	
//	swamp(oc1,oc2);
//	
//	cout<<"the value of c1 after swamp is";
//	oc1.display();
//	cout<<"the value of c2 after swamp is";
//	oc2.display();
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//


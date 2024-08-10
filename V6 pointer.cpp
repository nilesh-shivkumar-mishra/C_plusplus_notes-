// pointer in c++

#include<iostream>
using namespace std;

int main(){
	// what is a pointer ?---> data type which hold the address of otheerdata
	int a=3;
	int*b = &a;  // (&) hold address of operator   
	cout<<"Address of a"<<&a<<endl;
	cout<<"address of a"<<b<<endl;
	
	//(*)dereference operator
	//(*)(jis bhi operant ko int ma store kiya hoga variable ma* laga ka operant ka address store karna ka lia agar *variable  print kiya tho  operant  ka value daga)  
	cout<<"the value of addresh b is :"<<*b<<endl; // example (int*b = &a;) if we print *b we get value of operant mean value of a which is 3 at upside
	
	int **c;
	c=&b;
	cout<<"Address of a"<<&a<<endl;
	cout<<"Address of b"<<&b<<endl;
	cout<<"the value of addresh c is :"<<**c<<endl; //it will return 3
	
	return 0;
}

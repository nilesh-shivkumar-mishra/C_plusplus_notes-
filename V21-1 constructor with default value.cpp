#include <iostream>
using namespace std;

class simple{
	int data1;
	int data2;
	
	public:
		simple(int a,int b=9){   // conatructor with default value of b=9
		data1=a;
		data2=b;
		}
		
		void print(void);
		
};

void simple :: print(){
	cout<<"the value of data is ("<<data1<<" , "<<data2<<")"<<endl;
}
int main(){
	simple a(1);
	a.print();
	return 0;
}

#include <iostream>
using namespace std;

template <class T1 = int ,class T2 = char, class T3 = float> // direct declartion of template
class guru{
	private:
		T1 a;
		T2 b;
		T3 c;
	public:
		guru(T1 X , T2 Y , T3 Z){
			a=X;
			b=Y;
			c=Z;
		}
		void display(){
		cout<<"value of a is "<<a<<endl;
		cout<<"value of b is "<<b<<endl;
		cout<<"value of c is "<<c<<endl;
				
		}
};

int main(){
	guru<> harry(100 , 'j' , 199.10);
	harry.display();
	
//	guru< float , int ,int> larry(99.99 , 100 , 500);
//	larry.display();
}

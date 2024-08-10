#include<iostream>
using namespace std;

class point{
	int x ,y;
	
	public:
		// these 3 are constructor (constructor and class name have same name)
		point (int a ,int b){
			x=a;
			y=b;
		}
		
		point(int a){
			x=a;
			y=0;
		}
		
		point(){
			x=0;
			y=0;
		}
		void display(void){
			cout<<"the point is ("<<x << " , "<<y<<")"<<endl;
			
		}
};


int main(){
	point a(4,7);
	a.display();
	
	point b(8);
	b.display();
	return 0;
	
	point c3;
	c3.display();
}

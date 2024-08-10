#include<iostream>
using namespace std;

class poi{
	int x ,y;
	
	public:
		point (int a ,int b){
			x=a;
			y=b;
		}
		
		void display(void){
			cout<<"the point is ("<<x << " , "<<y<<")"<<endl;
			
		}
	friend poi square(poi o1 ,poi o2);
};

poi square(poi o1 ,poi o2){
	poi o3;
	o3.point((o1.x-o2.x),(o1.y-o2.y));
	return o3;
}

int main(){
	poi p,q,s;
	p.point(1,1);
	p.display();
	q.point(1,6);
	q.display();
	s=square(p,q);
	s.display();
	return 0;
}

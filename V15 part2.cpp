#include <iostream>
using namespace std;

class fri{
	int a;
	int b;
	public:
		void setdata(int v1,int v2){
			a=v1;
			b=v2;
		}
		void sumsetdata(fri ol ,fri o2){
			a=ol.a +o2.a;
			b=ol.b+o2.b;
		}
		void print(){
			cout<<"you complex number is "<<a<<" + "<<b<<"i"<<endl;
		}
};
int main(){
	 fri f,r,i;
	 f.setdata(1,2);
	 f.print();
	 
	r.setdata(3,4);
	 r.print();
	  
     i.sumsetdata(f,r);
	 i.print();
	 
	return 0;
}


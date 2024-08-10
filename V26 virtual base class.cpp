#include<iostream>
using namespace std;

class student{
	protected:
		int rollon;
	public:
		void set_rollon(int a){
		rollon=a;
		}
		void rollon_dis(void){
			cout<<"rollon is : "<<rollon<<endl;
		}
};

class subject_m: virtual public student{
	protected:
		float hindi;
		float english;
	public:
		void set_subject(float a, float b){
		hindi=a;
		english=b;
		}
		void subject_dis(void){
			cout<<"marks of hindi is : "<<hindi<<endl;
			cout<<"marks of english is : "<<english<<endl;
		}
};
class sport_m: virtual public student{
	protected:
		float pt;
	public:
		void set_sport(float a){
		pt=a;
		}
		void sport_dis(void){
			cout<<"marks of pt is : "<<pt<<endl;
		}
};

class result:  public subject_m , public sport_m{
	protected:
		float total;
	public:
		
		void total_dis(void){
			total = hindi+english+pt;
			rollon_dis();
			subject_dis();
			sport_dis();
			cout<<"result is  : "<<total<<endl;
			
		}
};
int main(){
	result r;
	r.set_rollon(155);
	r.set_subject(59.9,54.5);
	r.set_sport(60.0);
	r.total_dis();
	return 0;
}

//remeber the chart 
//student
//student=subject
//student=sport
//subject,sport=test


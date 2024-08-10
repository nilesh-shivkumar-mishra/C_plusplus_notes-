// this example is same as pervious example but we directly inheritance first ans second class in thid class (see third class format to inheritance)

#include<iostream>
using namespace std;

class first {
	protected:
		int rollon;
	public:
		void roll_on(int);
		void display(void);
};

void first :: roll_on(int a){
	rollon=a;
}
void first :: display(){
	cout<<"rollon is : "<<rollon<<endl;
}

class second  {
	protected:
		float maths;
		float physics;
	public:
		void marks(float ,float );
		void dis_marks(void);
};

void second :: marks(float a ,float b){
	maths = a;
	physics =b; 
}

void second::dis_marks(void){
	cout<<"marks of maths is :"<<maths<<endl;
	cout<<"marks of physics is :"<<physics<<endl;
}

class third : public first , public second{
	public:
	void persentage(void);
};

void third::persentage(void){
	float persentages=(maths+physics)/2;
	display();
	dis_marks();
	cout<<"persentage is : "<<persentages<<endl;
}

int main(){
	third t;
	t.roll_on(155);
	t.marks(35.9,49.8);
	t.persentage();
	return 0;
}

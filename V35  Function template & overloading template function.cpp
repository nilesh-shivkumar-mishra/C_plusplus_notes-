#include <iostream>
using namespace std;

template<class T>
class nil{
	public:
		T data1;
	nil(T a){
		data1=a;
	}
	void display();
};

// how we can define function out side  
template <class T>
void nil<T>:: display(){
		        cout<<"value of data is "<<data1<<endl;
	        }
	

// exact match function
void func(int a){
	cout<<"i am 1st function "<<a<<endl; 
}

// template function
template<class T>
void func(T a){
	cout<<"i am templatice function "<<a<<endl;
}

int main(){
//nil<float> h(5.7);
nil<char> h('c');
cout<<h.data1<<endl;;

func(4);// exact match function run hoga

}

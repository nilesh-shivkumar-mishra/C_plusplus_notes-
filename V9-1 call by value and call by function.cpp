#include <iostream>
using namespace std;


// this will not work
//int swap(int a , int b){
//	int temp = a;
//	a=b;
//	b= temp;
//}

int swap(int &a , int &b){
	int temp = a;
	a=b;
	b= temp;
}

int swappointer(int* a , int* b){
	int temp = *a;
	*a=*b;
	*b= temp;
}
int main(){
	int num1=4,  num2=5;
	cout<<"the value of a "<<num1<<" the value of b "<<num2<<endl;
	swap(num1 , num2); // it swap the number (function is declar at top)
	cout<<"the value of a "<<num1<<" the value of b "<<num2<<endl;
	swappointer(&num1,&num2); // it will swap the number (function is declar at top)
	cout<<"the value of a "<<num1<<" the value of b "<<num2<<endl;
	return 0;
}

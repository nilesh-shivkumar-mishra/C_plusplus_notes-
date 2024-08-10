// Recursive Function & Recursions in c++

#include<iostream>
using namespace std;

int factorial(int n){
	if(n<=1){
		return 1;
	}
	return n * factorial(n-1);
}

// note how it is work

// example factorial of 4

//factorial (4) //it will go factorial function which is decalr at up
// 4* factorial(3)
//4*3 factorial(2)
//4*3*2* factorial(1)
//4*3*2*1



int main() {
	//factorial of a number
	
	cout<<"enter a number"<<endl;
	int a ;
	cin>>a;
	cout<<"factorial of "<<a<<" is"<<factorial(a);
	
	return 0;
	
}

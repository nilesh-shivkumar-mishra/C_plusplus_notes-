#include <iostream>
using namespace std;

int main(){
	int a= 9;
	int *n=&a;
	
	cout<<"value of a using pointer"<< *(n)<<endl;
	
	//new keyword
	
	int *m = new int (40); // whith help of new keyword jo amlog (&a) karka value da ta tha who direct da sakta ha
	cout<<"value of m using pointer with new keyword "<<*m<<endl;
	
	float *q = new float (40.5); 
	cout<<"value of q using pointer with new keyword "<<*q<<endl;

	char *e = new char ('s'); 
	cout<<"value of e using pointer with new keyword "<<*e<<endl;
	
	int *arr = new int[4];
	arr[0]=40;
	arr[1]=30;
	arr[2]=60;
	arr[3]=90;
//	delete[] arr; // delet keyword delet value ofol arrr
	cout<<arr[3]<<endl;
}

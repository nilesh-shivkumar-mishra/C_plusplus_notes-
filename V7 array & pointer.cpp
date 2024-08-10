//array and pointer arithematic in c++

#include<iostream>
using namespace std;

int main(){
	int marks[]={23,34,566,70};
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[3]<<endl;	
	cout<<marks[4]<<endl;
	
	int boy[]={1};
	boy[1]=76;
	boy[2]=99;
	boy[3]=100;
	
	for (int i=0;i<4;i++){
		cout<<"marks got"<<boy[i]<<endl;
	}
	
//	// input from user on arr
//	
//	int n;
//	cout<<"enter how many numbeer do you want to store :"<<endl;
//	cin>>n;
//	
//	int l=1;
//	int arr[n];
//	for(int i=0;i<n;i++){
//		cout<<"enter "<<(l+i)<<" number"<<endl;
//		cin>>arr[i];
//	}
//	
//	for(int i=0;i<n;i++){
//		cout<<arr[i];
//	}
//	
//	// in arr pointer are different 
//	int*v=arr;  
//	cout<<*v<<endl; // it will return 1 value od array of arr
//	cout<<*(v+1)<<endl;	// it will return 2 value od array of arr
//	cout<<*(v+2)<<endl;	// it will return 3 value od array of arr
//	cout<<*(v+3)<<endl;	// it will return 4 value od array of arr
//	
//	cout<<*(v++)<<endl; // it will print 1 element of arr then increase
//	cout<<*(++v)<<endl;// it will increase then print
	return 0;
}

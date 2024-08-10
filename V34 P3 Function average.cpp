#include <iostream>
using namespace std;

//
//float average(int a , int b){
//	float avg = (a+b)/2;
//	return avg;
//}
//
//float average2 (float a , int b){
//	float avg = (a+b)/2;
//	return avg;
//}

template <class T1 , class T2> 

float average2 (T1 a , T2 b){
	float avg = (a+b)/2.0 ;
	return avg;
}

int main(){
	float a;
	float b;
	
	a= average2<float , int>(5.3 , 6);
	b= average2<int , int>(5,2);
	
	printf("the average of number is %f", a ); 
	
	printf("the average of number is %.2f", b);


//	a = average(5,2);
//	b = average2(5.3,2);
//	printf("the average of number is %f", a ); 
//	
//	printf("the average of number is %.2f", b);
//
//	
	return 0;
}

#include<iostream>
using namespace std;
 
 class kirana{
 	private:
 	    int id;
 	    float price;
 	public:
 	   void setdata(int a ,float b){
 		id =a;
 		price =b;
		}	
		void getdata(void){
			cout<<"id no is "<<id<<endl;
			cout<<"price is "<<price<<endl;
		}	
   };
int main(){
	int size = 2;
	kirana *ptr =new kirana [size];
	kirana *ptrtemp =ptr;
	int p;
	float q;
	
	for (int i = 0 ;i<size ;i++){
		cout<<"enter id no and price of item "<<i+1<<endl;
		cin>>p>>q;
		ptr->setdata(p ,q);
		ptr++;
	}
	
	for(int i = 0 ; i<size ; i++){
		cout<<"output of item"<<i+1<<endl;
		ptrtemp->getdata();
		ptrtemp++;
	}
	return 0;
}

//memory allocation & ing array in classes

#include<iostream>
using namespace std;

class shop{
	int itemid[100];
	int itemprice[100];
	int counter;

	public:
	void count(void){
		counter= 1 ;
	}
	
	void setid(void){
	cout<<"Enter id no "<<counter <<" :"<<endl;
	cin>>itemid[counter];
	cout<<"Enter price of item "<<endl;
	cin>>itemprice[counter];
	counter++;
	}
	
	void display(void){
	for(int i=0;i<counter;i++){
   	cout<<"item id no is "<<itemid[i]<<" price was"<<itemprice[i]<<endl;
	}

	}
	
};
int main(){
	shop k;
	k.count();
	k.setid();
	k.setid();
	k.setid();
	k.display();
	return 0;
}

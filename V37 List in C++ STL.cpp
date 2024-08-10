#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
	list<int>:: iterator it;
	for( it=lst.begin();it!=lst.end();it++){
		cout<<*it<<"";
	}
	cout<<endl;
}


int main(){
	list<int> list1; // creating vector name
	
	
	list1.push_back(1) ;
	list1.push_back(2);
	list1.push_back(3);
	list1.push_back(4);
	list1.push_back(5);
	list1.push_back(6);
	

	
//	list<int> :: iterator iter;
//	iter = list1.begin;
//	cout<<*iter<<"";
//	iter++;
//	cout<<*iter<<"";
//	iter++;
//	cout<<*iter<<"";
//	iter++;
//	cout<<*iter<<"";
//	iter++;
	
//	display(list1);

	
	list<int> list2(3); // we created emplty list of 3
	list<int> :: iterator iteratorname;
	iteratorname =list2.begin();
	*iteratorname =9;
	iteratorname++;
	*iteratorname =8;
	iteratorname++;
	*iteratorname =7;
	iteratorname++;
	
	display(list2);
	
//	list2.pop_back();
//	list2.pop_front();
//	list2.remove(9); // it will remove all 9

	list2.sort();
//	list2.reverse();
	display(list2);
	
	
	// merging of list1 and list2
	list1.merge(list2);
	display(list1);
	return 0;
}

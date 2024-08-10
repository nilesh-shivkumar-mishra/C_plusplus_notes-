#include<iostream>
using namespace std;

int main(){

	int age ;
	cout<<"enter you age for checking you can drive car or not"<<endl;
	cin>>age;
	if(age>=18){
		cout<<"you can drive car"<<endl;
	}
	else if(age<18){
		cout<<"you can not drive car"<<endl;
	}
	else{
		cout<<"enter age as integer"<<endl;
	}
	return 0;
}

//----------------------------------individual run karna------------------------------------------

//int main(){
//int age ;
//	cout<<"enter you age "<<endl;
//	cin>>age;
//switch (age) // enter in parathese variable that you 
//{
//	case 18:
//		cout<< "you are 18"<<endl;
//		break;
//	
//	case 22:
//		cout<< "your age is 22"<<endl;
//		break;
//	
//	case 25:
//		cout<<"your age is 25"<<endl;
//		break;
//	
//	default:
//		cout<<"no specal case"<<endl;
//		break;
//}
//}














# include<iostream>
using namespace std;

//int main()
//{
//	// brake statement
//	for (int i=0;i<101;i++)	
//	{
//	
//		if(i==10){
//			break; // it will stop loop if i is 10
//		}
//		cout<<i<<endl;
//	}
//	return 0;
//}

int main()
{
	// continue statement
	for (int i=0;i<101;i++)	
	{
	
		if(i==10){
			continue; // it will forget 10 and print till 100
		}
		cout<<i<<endl;
	}
	return 0;
}

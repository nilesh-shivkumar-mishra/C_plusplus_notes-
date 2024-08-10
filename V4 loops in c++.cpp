// for loop , while loop ,do while loop

//---------for loop

# include<iostream>
using namespace std;

int main (){ 
	
// note remember use int to declar i , i++ k last ma ; mat use karna
//	for (int i =0;i<4;i++) // it will prinnt 0 to 3 (if you not writen i++ it will print 0 infinite
//	{
//		cout<<i<<endl;
//		
//	}


// -------------while loop

//int i =1; // intilize value of i
//while(i<45){                // condition in ()
//	cout<<"it will print till 44 : "<<i<<endl;
//	i++; // increase value of 1
//} 

// -----------------do while loop

//int i =1; // intilize value of i
//do{
//	cout<<"print i"<<i<<endl;
//}while(i<40);

// ----------table of any number
int i =1;
int s;
cout<<"enter number of table : "<<endl;
cin>>s;
while(i<=10){
	cout<<i*s<<endl;
	i++;
}
};












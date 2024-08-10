// structure ,union & Enums in c++

# include<iostream>
using namespace std;

	struct employee{
	int favint;
	char favChart;
	float favfloat;
};

// same thing (typedef is use to give name shortcut)
//typedef	struct employee{
//	int favint;
//	char favChart;
//	float favfloat;
//} ep;


int main(){
//	ep boy; //shortcut  name
	struct employee boy;
	boy.favint = 8;
	boy.favChart ='j'; // not use " " in char use ' ' in char
	boy.favfloat=8.7;
		
	cout<<boy.favint<<endl;	
	
	return 0;
}

// run individual

//in union you can use 1 define operant form union (if you use two operant at a time from union function then it provide garbage value of first operant )

// using typedef 

typedef union employ{
	int integer;
	char favchart;
} un;

int main(){
	un ml;
	ml.integer =90;  // 1 operant from union function
	ml.favchart ='c'; // 2 operant from union function
	cout<<ml.integer<<endl; // now it will provide grabge value of 1 operant because you use at atime 2 operant
	cout<<ml.favchart<<endl;
	
	//enum
	
	enum meal {breakfast,king,dog,village};
	cout<<village; // it will return position value of village in enum (output=3)
	
	meal m1 = dog; // to defines the operant
	return 0;
}









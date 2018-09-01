#include <iostream>
using namespace std;
int main()
{
	int grade;
	cout<<"please enter grade"<<endl;
	cin>>grade;
if(grade>=80 && grade<=100)
{
	cout<<"A";
}

else if(grade>=75 && grade<=79)
{
	cout<<"B+";
}

else if(grade>=70 && grade<=74)
{
	cout<<"B";
}

else if(grade>=65 && grade<=69)
{
	cout<<"C+";
}

else if(grade>=60 && grade<=64)
{
	cout<<"C";
}

else if(grade>=55 && grade<=59)
{
	cout<<"D+";
}
else if(grade>=50 && grade<=54)
{
	cout<<"D";
}
else if(grade>=45 && grade<=49)
{
	cout<<"E";
}

else if(grade>=0 && grade<=44)
{
	cout<<"F";
}
return 0;
}

#include<iostream>
using namespace std;
void      printhi()
{
	cout<<"Hi"<<endl;
	return ;
}
int sum(int a, int b)
{
	int c;
	a=700;
	c=a+b;
	cout<<"the value of c is"<<c<<endl;
}
int main()
{
	printhi();
	int a, b;
	int c;
	a=4;
	b=5;
	c=75;
	int d;
	d=sum(a,b);
	cout<<"the value of c is"<<c<<endl;
	return 0;
}

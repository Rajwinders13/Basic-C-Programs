#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
	void get_a()
	{
		cout<<"Enter the value of a:";
		cin>>a;
	}
	void  display()
	{
		cout<<a;
	}
};
class B:public A
{
	int b;
	public:
	void get_b()
	{
		cout<<"Enter the value of b:";
		cin>>b;
	}
	void display()
	{
		cout<<b;
	}
};
void main()
{
	clrscr();
	B b;
	b.get_a();
	b.get_b();
	b.display();
	getch();
}
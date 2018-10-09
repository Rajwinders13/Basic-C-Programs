#include<iostream.h>
#include<conio.h>
class student
{
	protected:
	int rollno,m1,m2;
	public:
	void get()
	{
		cout<<"Enter roll no:"<<endl;
		cin>>rollno;
		cout<<"Enter the marks in 2 subjects:"<<endl;
		cin>>m1>>m2;
	}
};
class sports
{
	protected:
	int sm;
	public:
	void getsm()
	{
		cout<<"Enter the marks of sports:"<<endl;
		cin>>sm;
	}
};
class statement:public student, public sports
{
	int tot,avg;
	public:
	void display()
	{
		tot=m1+m2+sm;
		avg=tot/3;
		cout<<"Total marks= "<<tot<<"Average of marks= "<<avg<<endl;
	}
};
void main()
{
	clrscr();
	statement s;
	s.get();
	s.getsm();
	s.display();
	getch();
}
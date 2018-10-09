#include<iostream.h>
#include<conio.h>
class student
{
	protected:
	int rollnumber;
	public:
	void getnumber(int a)
	{
		rollnumber=a;
	}
	void putnumber()
	{
		cout<<"Roll number= "<<rollnumber<<endl;
	}
};
class subject : public student
{
	protected:
	float sub1,sub2;
	public:
	void getmarks(float a,float b)
	{
		sub1=a;
		sub2=b;
	}
	void putmarks(void)
	{
		cout<<"Marks in sub1= "<<sub1<<endl<<"Marks in sub2= "<<sub2<<endl;
	}
};
class result : public subject
{
	float total;
	public:
	void display()
	{
		total=sub1+sub2;
		putnumber();
		putmarks();
		cout<<"Total= "<<total<<endl;
	}
};
main()
{
	clrscr();
	result s1;
	s1.getnumber(13);
	s1.getmarks(98,100);
	s1.display();
	getch();
}
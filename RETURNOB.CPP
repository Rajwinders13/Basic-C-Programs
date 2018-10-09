#include<iostream.h>
#include<conio.h>
class complex
{
	float real,img;
	public:
	void input(float x,float y)
	{
		real=x;
		img=y;
	}
	friend complex sum(complex,complex);
	void show(complex);
};
complex sum(complex c1,complex c2)
{
	complex c3;
	c3.real=c1.real+c2.real;
	c3.img=c1.img+c2.img;
	return c3;
}
void complex :: show(complex c)
{
	cout<<"real part= "<<c.real<<endl;
	cout<<"img part= "<<c.img<<endl;
}
void main()
{
	clrscr();
	complex a,b,c;
	a.input(34.5,68.4);
	b.input(76.8,23.3);
	c=sum(a,b);
	c.show(c);
	getch();
}
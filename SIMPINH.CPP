#include<iostream.h>
#include<conio.h>
class b
{
	private:
	int a;
	public:
	int b;
	void get_ab();
	void get_a(void);
};
class c: public b
{
	int c;
	public:
	void mul();
	void show();
};
void b:: get_ab()
{
	cout<<"Enter the values of a and b"<<endl;
	cin>>a>>b;
}
void b :: get_a(void)
{
	return a;
}
void c :: mul()
{
	c=(get_a(void))*b;
}
void c :: show()
{
	cout<<"a: "<<get_a(void)<<endl;
	cout<<"b: "<<b<<endl;
	cout<<"c= "<<c<<endl;
}
void main()
{
	clrscr();
	c obj;
	obj.get_ab();
	obj.mul();
	obj.show();
	getch();
}

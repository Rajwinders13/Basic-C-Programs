#include<iostream.h>
#include<conio.h>
class counter
{
	unsigned int count;
	public:
	counter()
	{
		count=0;
	}
	int get_count()
	{
		return count;
	}
	operator ++()
	{
		count++;
	}
};
void main()
{
	clrscr();
	counter c1,c2;
	cout<<c1.get_count();
	cout<<c2.get_count();
	c1++;
	c2++;
	c2++;
	cout<<c1.get_count();
	cout<<c2.get_count();
	getch();
}

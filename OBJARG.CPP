#include<iostream.h>
#include<conio.h>
class time
{
	int hours;
	int minutes;
	public:
	void gettime(int h,int m)
	{
		hours=h;
		minutes=m;
	}
	void puttime()
	{
		cout<<"Hours= "<<hours<<endl;
		cout<<"Minutes="<<minutes<<endl;
	}
	void sum(time,time);
};
void time :: sum(time s1,time s2)
{
	minutes=s1.minutes+s2.minutes;
	hours=minutes/60;
	hours=hours+s1.hours+s2.hours;
}
void main()
{
	clrscr();
	time t1,t2,t3;
	t1.gettime(2,30);
	t2.gettime(5,50);
	t3.sum(t1,t2);
	cout<<"t1=\n";t1.puttime();
	cout<<"t2=\n";t2.puttime();
	cout<<"t3=\n";t3.puttime();
	getch();

}
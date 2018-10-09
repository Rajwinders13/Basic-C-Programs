#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	aa:
	char name[20],a;
	int score=0;
	cout<<"Enter your name"<<endl;
	cin>>name;
	cout<<"Welcome "<<name<<endl;
	cout<<"Press 1 to start or 2 to exit";
	int i;
	cin>>i;
	if(i==1)
	{
		cout<<"Q1.Python, ruby are all"<<endl;
		cout<<"a.Fishes\tb.Girls\nc.Programing languages\td.Jewels"<<endl;
		cin>>a;
		if(a=='c')
			score+=4;
		else
			score--;
		cout<<"Q2.Capital of Punjab is"<<endl;
		cout<<"a.Chattisgarh\tb.Chandigarh\nc.Chintpurni\td.Chamba"<<endl;
		cin>>a;
		if(a=='b')
			score+=4;
		else
			score--;
		cout<<"Q3.National animal of India is"<<endl;
		cout<<"a.Python\tb.Tiger\nc.Lion\td.Gorilla"<<endl;
		cin>>a;
		if(a=='b')
			score+=4;
		else
			score--;
		cout<<"Q4.Capital of Goa is"<<endl;
		cout<<"a.Panjim\tb.Mummbai\nc.Shimla\td.Kerala"<<endl;
		cin>>a;
		if(a=='a')
			score+=4;
		else
			score--;
		cout<<"Q5.Which of the following is an italian dish"<<endl;
		cout<<"a.Noodles\tb.Spring Rolls\nc.Palak Paneer\td.Pasta"<<endl;
		cin>>a;
		if(a=='d')
			score+=4;
		else
			score--;

	}
	else if(i==2)
	{
		exit(0);
	}
	cout<<"Quiz is over "<<name<<" your score is "<<score<<endl;
	cout<<"Would you like to try it once again"<<endl<<"1.yes or 2.no"<<endl;
	cin>>i;
	if(i==1)
		goto aa;
	else if(i==2)
	{
		cout<<"Thank You";
	}
	getch();
}
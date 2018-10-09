#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	clrscr();
	ofstream  outf("abc");
	cout<<"Enter name:"<<endl;
	char name[20];
	cin>>name;
	outf<<name<<"\n";
	cout<<"Enter item cost"<<endl;
	float cost;
	cin>>cost;
	outf<<cost<<endl;
	outf.close();
	ifstream inf("abc");
	inf>>name;
	inf>>cost;
	cout<<"Item Name= " <<name<<endl;
	cout<<"Cost= "<<cost<<endl;
	getch();
}

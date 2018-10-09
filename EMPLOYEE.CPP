#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class employee
{
  char name[30];
  int age;
  public:
  void getdata()
  {
    cout<<"enter the name of the employee";
    cin>>name;
    cout<<"enter the age of the employee";
    cin>>age;
  }
  void display()
  {
   cout<<"the name of the employee is"<<name<<endl;
   cout<<"the age of the employee is"<<age;
  }
 };
 void main()
 { clrscr();
  employee e;
  e.getdata();
  e.display();
  getch();
 }
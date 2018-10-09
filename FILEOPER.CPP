#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
void main()
{
	clrscr();
	fstream file;
	char ch;
	char st[100];
	file.open("abc",ios::in);
	while(file)
	{       int j=0;
		file.get(ch);
		if(ch>=97&&ch<=122)
		{
			ch=ch-32;

		}
		st[j]=ch;
		j++;
	}
	file.close();
	file.open("abc",ios::out);
	int l=strlen(st);
	for(int i=0;i<=l;i++)
	{
		file.put(string[i]);
	}
	file.close();
	getch();
}

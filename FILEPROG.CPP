#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
void main()
{
	clrscr();
	ifstream file;
	char* file_Name;
	char buffer[50];
	char ch;
	int count=1;
	int countVowel = 0;
	cout<<"Enter file name with extension"<<endl;
	cin>>file_Name;
	file.open(file_Name);
	while(file)
	{
	    file.get(ch);
	    cout<<ch<<endl;
	    if(ch == ' ')
	    {
		count++;
	    }
	    else if(ch == 'a' ||ch == 'e'||ch=='i'||ch=='o'||ch=='u')
	    {
		countVowel++;
	    }
	}
	cout<<"No of words are"<<count<<endl;
	cout<<"No of vowels are"<<countVowel<<endl;
	file.close();
	getch();
}

#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class student
{
private:
string name;
int rollno;
public:
void add_info()
{
fstream fs;
fs.open("C:\\Users\\admin\\Desktop\\OOP\\sample.txt",ios::app);

if(!fs)
cout<<"file creation failed...";
else
{
cout<<"\nenter name of student";
cin>>name;
cout<<"\nenter roll no.";
cin>>rollno;
fs<<name<<" ";
fs<<rollno<<"\n";
fs.close();
}
}
void display_info()
{
fstream fs;

fs.open("C:\\Users\\admin\\Desktop\\OOP\\sample.txt",ios::in);
if(!fs)
cout<<"No such file...";
else
{
while(!fs.eof())
{
fs>>name;
fs>>rollno;
cout<<name<<" ";
cout<<rollno;
cout<<"\n";
}
fs.close();
}
}
};
int main()
{
//fstream fs;
student s;
int ch;
do
{
cout<<"\n*** Student Information System ***";
cout<<"\n*** Menu ***";
cout<<"\n 1. Add student information";
cout<<"\n 2. Display student information";
cout<<"\n 3. Exit";
cout<<"\n Enter your choice";
cin>>ch;

switch(ch)
{
case 1:
s.add_info();
break;
case 2:
s.display_info();
break;
case 3:
exit(0);
}
}while(ch!=3);

return 0;
}

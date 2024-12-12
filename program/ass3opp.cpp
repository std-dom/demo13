#include<iostream>
using namespace std;
class publication
{
string title;
float price;
public:
void add()
{
cout<<"\nEnter publication information";
cout<<"\nEnter title of publication: ";
cin.get();
getline(cin,title);
cout<<"\nEnter price of publication: ";
cin>>price;
}
void display()
{
cout<<"\n----------------------------- ";
cout<<"\nTitle of publication :"<<title;
cout<<"\nPrice of publication :"<<price;
}
};
class book:public publication
{
int page_count;
public:
void add_book()
{
try
{
add();
cout<<"\nEnter page count of book: ";
cin>>page_count;
if(page_count<=0)
throw page_count;
}catch(...)
{
cout<<"Invalid page count.....";
page_count=0;
}
}
void display_book()
{
display();
cout<<"\nPage count :"<<page_count;
cout<<"\n----------------------";
}
};
class tape:public publication
{

float play_time;
public:
void add_tape()
{
try
{
add();
cout<<"\nEnter play duration of tape: ";
cin>>play_time;
if(play_time<=0)
throw play_time;
}catch(...)
{
cout<<"Invalid play time.....";
play_time=0;
}
}
void display_tape()
{
display();
cout<<"\nPlay time :"<<play_time<<"min";
cout<<"\n----------------------";
}
};

int main()
{
book b1[10];
tape t1[10];
int ch=0, b_count=0, t_count=0;
do
{
cout<<"\n***Publication Information System***";
cout<<"\n***Menu***";
cout<<"\n1. Add information of books";
cout<<"\n2. Add information of tapes";
cout<<"\n3. Display information of books";
cout<<"\n4. Display information of tapes";
cout<<"\n5. Exit";
cout<<"\nEnter choice";
cin>>ch;
switch(ch)
{
case 1:
b1[b_count].add_book();
b_count++;
break;
case 2:
t1[t_count].add_tape();
t_count++;
break;
case 3:

cout<<"\n***Publication information system(BOOKS)***";
for(int j=0;j<b_count;j++)
{
b1[j].display_book();
}
break;
case 4:
cout<<"\n***Publication information system(TAPES)***";
for(int i=0;i<t_count;i++)
{
t1[i].display_tape();
}
break;
case 5:
exit(0);
}
}while(ch!=5);
return 0;
}

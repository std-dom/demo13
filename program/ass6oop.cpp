#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Item
{
public:
char name[10]; //varible declaration
int quantity;
int cost;
int code;

bool operator == (const Item& i1)
{
if(code == i1.code)
return 1;
else
return 0;

}
bool operator < (const Item& i1)
{
if(cost<i1.cost)
return 1;
else
return 0;

}

};

vector<Item> v1;
void insert()
{
Item i1;
cout<<"\nEnter Item Name:";
cin>>i1.name;
cout<<"\nEnter Item Quantity:";
cin>>i1.quantity;
cout<<"\nEnter Item Cost:";
cin>>i1.cost;
cout<<"\nEnter Item Code:";
cin>>i1.code;
v1.push_back(i1);
}

void print(Item &i1)
{
cout<<"\n";
cout<<"\nItem Name:"<<i1.name;
cout<<"\nItem Quantity:"<<i1.quantity;
cout<<"\nItem Cost:"<<i1.cost;
cout<<"\nItem Code:"<<i1.code;
}

void display()
{
for_each(v1.begin(), v1.end(), print);

}

void search()
{
vector<Item>::iterator p;
Item i1;

cout<<"\nEnter Item Code to search:";
cin>>i1.code;

p = find(v1.begin(),v1.end(),i1);

if(p==v1.end())
cout<<"\nNot found.";
else
cout<<"\nFound.";
}
void delet()
{
vector<Item>::iterator p;
Item i1;

cout<<"\nEnter Item Code to delete:";
cin>>i1.code;

p = find(v1.begin(),v1.end(),i1);

if(p == v1.end())
cout<<"\nNot found.";
else

{
v1.erase(p);
cout<<"\nDeleted.";
}
}

bool compare(const Item &i1, const Item &i2)
{

return i1.cost < i2.cost;
}

int main()
{
int ch;
do
{
cout<<"\n***** Menu *****";
cout<<"\n1.Insert";
cout<<"\n2.Display";
cout<<"\n3.Search";
cout<<"\n4.Sort";
cout<<"\n5.Delete";
cout<<"\n6.Exit";
cout<<"\nEnter your choice:";
cin>>ch;
switch(ch)
{

case 1: insert();
break;

case 2: display();
break;

case 3: search();
break;

case 4: sort(v1.begin(), v1.end(), compare);
cout<<"\n\n Sorted on Cost";
display();
break;

case 5: delet();
break;

case 6: exit(0);

}

}while(ch!=7);

return 0;
}

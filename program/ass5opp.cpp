#include<iostream>
using namespace std;
template<class T>
class sort
{
//data_type arrayname[size];
T a[50];
int n;
public:
void accept()
{
cout<<" Enter no. of elements in an array :\n";
cin>>n;
cout<<" Enter elements :\n";
for(int i=0;i<n;i++)
{
cin>>a[i];

}
}
void selection_sort()
{
T temp;

for(int i=0;i<n-1;i++)
{
int min=i;
for(int j=i+1;j<n;j++)
{
if(a[min]>a[j])
{
min=j;

}
}
temp=a[min];
a[min]=a[i];
a[i]=temp;
}
}
void display()
{
cout<<"After sorting:"<<endl;
for(int i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
}
};
int main()
{
sort <int> s1;
cout<<"For Int Numbers:"<<endl;
s1.accept();
s1.selection_sort();
s1.display();

sort <float> s2;
cout<<"For Float Numbers:"<<endl;
s2.accept();
s2.selection_sort();
s2.display();
return 0;
}

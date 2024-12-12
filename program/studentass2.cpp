#include<iostream>
using namespace std;
class StudData;
class student
{
string name;
int roll_no;
string cls;
char* division;
string dob;
char* bloodgroup;
static int count;
public:
student()
{
name="";
roll_no=0;
cls="";
division=new char;
dob="dd/mm/yyyy";
bloodgroup=new char[4];
}
~student()
{
delete division;
delete[] bloodgroup;
}
static int getcount()
{
return count;
}
void getData(StudData*);
void dispData(StudData*);
};
class StudData
{
string caddress;
long int* teleno;
long int* dlno;
friend class student;
public:
StudData()
{
caddress="";
teleno=new long;
dlno=new long;
}
~StudData()
{
delete teleno;
delete dlno;
}
void getStudData()
{

cout<<"Enter contact address: ";
cin.get();
getline(cin,caddress);
cout<<"Enter telephone number: ";
cin>>*teleno;
cout<<"Enter driving lic number: ";
cin>>*dlno;
}
void dispStudData()
{
cout<<"contact address: "<<caddress<<endl;
cout<<"telephone number: "<<*teleno<<endl;
cout<<"driving lic number: "<<*dlno<<endl;
}
};
inline void student::getData(StudData* st)
{
cout<<"Enter Student Name: ";
//cin.get();
getline(cin,name);
cout<<"Enter Student roll no: ";
cin>>roll_no;
cout<<"Enter Student class: ";
cin.get();
getline(cin,cls);
cout<<"Enter Student division: ";
cin>>division;
cout<<"Enter Student DOB: ";
cin.get();
getline(cin,dob);
cout<<"Enter Student bloodgroup: ";
cin>>bloodgroup;
st->getStudData();
count++;
}
inline void student::dispData(StudData* st1)
{
cout<<"Student Name: "<<name<<endl;
cout<<"Student roll no: "<<roll_no<<endl;
cout<<"Student class: "<<cls<<endl;
cout<<"Student division: "<<division<<endl;
cout<<"Student DOB: "<<dob<<endl;
cout<<"Student blood group: "<<bloodgroup<<endl;
st1->dispStudData();
}
int student::count;
int main()
{
student* st1[100];
StudData* st2[100];
int n=0;
char ch;
do
{
st1[n]=new student;

st2[n]=new StudData;
st1[n]->getData(st2[n]);
n++;
cout<<"Do you want to add another student details?[Y/N]"<<endl;
cin>>ch;
cin.get();
}while(ch=='Y' || ch=='Y');
for(int i=0;i<n;i++)
{
cout<<"********************"<<endl;
st1[i]->dispData(st2[i]);
}
cout<<"+++++++++++++++++++++++++++++"<<endl;
cout<<"Total Number of students: "<<student::getcount()<<endl;
cout<<"+++++++++++++++++++++++++++++"<<endl;
for(int i=0;i<n;i++)
{
delete st1[i];
delete st2[i];
}
return 0;
}

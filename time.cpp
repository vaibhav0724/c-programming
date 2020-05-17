#include<iostream>
using namespace std;
int main()
{
int hour,min,sec;
int time-in-sec;
cout<<"input time elapsed in 'H':";
cin>>hour;
cout<<"input time elapsed in 'm':";
cin>>min;
cout<<"input time elapsed in 's':";
cin>>sec;
cout<<endl;
time-in-sec=(hour*3600)+(min*60)+sec;
cout<<"TIME IN SECONDS:"<<time-in-sec<<endl<<endl;
return 0;
}

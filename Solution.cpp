#include<iostream>
using namespace std;
int main()
{
int i,n,max;
int arr[n];
cout<<"Enter the size of the array :";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter the elements :";
cin>>arr[i];
cout<<endl;
}
max=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
}
cout<<"max no is :"<<max<<endl;
return 0;
}

#include<iostream>
using namespace std;
int main()
{
int x,i;
cout<<"enter a number");
cin>>x;
for(i=2;i<=(x-i);i=nextprime(i)
{
if(is prime(x-i))
cout<<i+(x-i)=x;
}
}
int nextprime (int n);
{
do
n++
while(!is prime(n));
return(n);
}
int isprime(int n)
{
int i;
for(i=2;i<n;i++)
if(n%i==0)
return(0);
return(1);
}

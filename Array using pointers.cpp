#include<iostream>
using namespace std;
int main()
{
int arr[5] ={1,2,3,4,5},I,*ptr;
ptr=arr;
for(i=0;i<5;i++)
cout<<*ptr++<<"\n";
return 0;
}

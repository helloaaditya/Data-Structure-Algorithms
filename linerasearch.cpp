//write a program to linear search an element in an array
#include <iostream>
using namespace std;
int main()
{
int a[10],i,n,flag=0,item;
cout<<"Enter the size of array";
cin>>n;
cout<<"Enter the elements of array";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Enter the element to be searched";
cin>>item;
for(i=0;i<n;i++)
{
if(a[i]==item)
{
flag=1;
break;
}
}   
if(flag==1)
{
cout<<"Element found at position"<<i+1;
}
else
{
cout<<"Element not found";
}
return 0;
}

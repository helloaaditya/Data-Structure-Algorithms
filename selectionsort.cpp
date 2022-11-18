//program to demonstrate selection sort algorithum
#include <iostream>
using namespace std;
int main()
{
int a[100],n,i,j,temp;
cout<<"Enter the number of elements:";
cin>>n;
cout<<"Enter the elements:";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
cout<<"Sorted array:";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;
}

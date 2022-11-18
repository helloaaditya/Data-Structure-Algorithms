//progam to demonstrate insertion sort algorithum
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
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0 && a[j]>temp)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=temp;
}
cout<<"Sorted array:";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;
}


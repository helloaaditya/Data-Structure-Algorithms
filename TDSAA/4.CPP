#include<iostream.h>
#include<conio.h>

void main(){
int i, n, arr[20], key, j;
clrscr();
cout<<"Enter the number:\n";
cin>>n;
cout<<"Enter the elements:\n";
for(i=0; i<n; i++)
	cin>>arr[i];
for(i=0; i<n; i++) {
	key=arr[i];
	j=i-1;
while(j>=0 && (arr[j]>key)){
	arr[j+1]=arr[j];
	j--;
	}
arr[j+1]=key;
}
cout<<"Sorted array is:";
for(i=0; i<n; i++)
	cout<<arr[i]<<"\t";
getch();
}
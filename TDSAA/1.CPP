#include<iostream.h>
#include<conio.h>

void main(){
int loc=0, n, i, arr[20], item;
cout<<"Enter the number of elements\n";
cin>>n;
cout<<"Enter the elements : \n";
for(i=0; i<n; i++)
	cin>>arr[i];
cout<<"Enter the element to search : \n";
cin>>item;
for(i=0;i<n; i++){
	if(arr[i]==item){
		loc=i+1;
		break;
	}
}
if(loc>0)
	cout<<"Element found at the location :: "<<loc;
else
	cout<<"Element not found :( ";

getch();
}
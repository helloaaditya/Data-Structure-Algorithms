#include<iostream.h>
#include<conio.h>

void main(){
clrscr();
int mid, b, e, i, a[20], item, n;
cout<<"Enter the number of elements :: \n";
cin>>n;
cout<<"Enter the elements ::\n";
for(i=0; i<n; i++)
	cin>>a[i];
cout<<"Enter the item to search ::\n";
cin>>item;
b=0;
e=n-1;

while(b<=e){
	mid=(b+e)/2;
	if(a[mid]==item) {
		cout<<"Element found at position :::"<<mid+1;
		break;
		}
	else if(a[mid]<item){
		b=mid+1;     }
	else{
		e=mid-1;
	}
}
if(b>e)
	cout<<"Element not found :(";
getch();
}
